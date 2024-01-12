#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define DIM 12 //qtd de tributos
#define DIMC 13 //qtd de caracteres
#define QTD 31 //qtd de personagens
#define FALSE 0
#define TRUE 1
#define RETURN -1

typedef struct SKILLS {
    char nome[DIMC * 2];
    int dano, acerto;
} SKILL;

typedef struct ATRIBUTOS {
    char nome[DIMC];
    int valor[DIM];
    int qtdSkill;
    SKILL *skill;
} ATRIBUTO;


void limpaChar(FILE *pa) {
    char c;
    
    do {
        c = fgetc(pa);
    } while (c != ':');
    c = fgetc(pa);
    return;
}

int leBD(int i, FILE *pa, ATRIBUTO *atr) {
    int j, l;
    char c;
    
    limpaChar(pa);
    fgets(atr[i].nome, DIMC, pa);
	//limpando caractere <enter> do nome
	atr[i].nome[strlen(atr[i].nome) -1] = '\0';
    limpaChar(pa);
    //atribuindo valores das variaveis
    for (j = 0; j < DIM; j++) {
        fscanf(pa, "%d", &atr[i].valor[j]);
        limpaChar(pa);
    }
    fscanf(pa, "%d", &atr[i].qtdSkill);
    
    //alocando memoria para skills
    if ( (atr[i].skill = (SKILL*) calloc(atr[i].qtdSkill, sizeof (SKILL))) == NULL) {
        return FALSE;
    }
    
    //atribuindo valores das skills
    for (j = 0; j < atr[i].qtdSkill; j++) {
        //atribuindo nome da skill
        c = fgetc(pa);
		c = fgetc(pa);
		for (l = 0; c != ':'; l++) {
			atr[i].skill[j].nome[l] = c;
            c = fgetc(pa);
		}
        //atribuindo dano da skill
        limpaChar(pa);
        fscanf(pa, "%d", &atr[i].skill[j].dano);
        //atribuindo acerto da skill
        limpaChar(pa);
        fscanf(pa, "%d", &atr[i].skill[j].acerto);
    }
    
    return TRUE;
}

int main() {
    char nome[DIMC], nomeBD[DIMC + 4];
    int i, person;
    double temp, mult;
    FILE *pa;
    char nomes[DIM][DIMC];
    ATRIBUTO atr[QTD];
    
    
    system("color b");
    system("title GxG - Exaustao");
    system("cls");
    
    //carregando stream de dados
    if ( (pa = fopen("ficha.txt", "r")) == NULL) {
        puts("Nao foi carregado stream para o ponteiro pa");
        system("pase>>null");
		return 1;
    }
    
    //atribui ficha do personagem a atributos
    for (i = 0; i < QTD; i++) {
        if (leBD(i, pa, atr) == FALSE) {
			puts("nao foi alocado memoria ao ponteiro pa");
			system("pause>>null");
			return 1;
		}
    }
    
    //descarregando stream
    fclose(pa);
    
    //atribuindo nome dos valores (atributos)
    strcpy(nomes[0], "Iniciativa");
    strcpy(nomes[1], "Classe Esq");
    strcpy(nomes[2], "Pericia FOR");
    strcpy(nomes[3], "Pericia CON");
    strcpy(nomes[4], "Pericia DEX");
    strcpy(nomes[5], "Pericia INT");
    strcpy(nomes[6], "Pericia CAR");
    strcpy(nomes[7], "Pericia CDN");
    strcpy(nomes[8], "Velocidade");
    strcpy(nomes[9], "Aparencia");
    strcpy(nomes[10], "Health Pts");
    strcpy(nomes[11], "Ren");
	
    
    do {
        
		system("cls");
		
        //###################### ENTRADA DE NOME ######################
        //lendo personagem
        do {
			printf("Nome do char: ");
			fflush(stdin);
			scanf(" %s", &nome);
			strupr(nome);
			
			//procurando numero relativo ao personagem
			for (i = 0; i < QTD; i++) {
				if ( (strcmp(nome, atr[i].nome) == 0)) {
					break;
				}
			}
			if (i == QTD) {
				puts("Nome nao encontrado. Digite outro");
			}
		} while (i == QTD);
        //atribuindo valor de i para person;
        person = i;
        
		//lendo multiplicados
        puts("Entre com o valor percentual inteiro. Ex: 50");
        //o valor é lido como double mesmo
        printf("Saude em %%: "); scanf(" %lf", &mult);
        //atribuindo valor percentual a mult
        mult /= 100;
		
        //##################### OPERANDO VALORES ######################
        //ATRIBUTO
        //reduzindo valor da Classe de Esquiva, que nao deve ser perdido
        atr[person].valor[1] -= 10;
        
		for (i = 0; i < DIM; i++) {
            temp = mult * atr[person].valor[i];
            atr[person].valor[i] = floor(temp);
        }
        //nao apagar. esses valores eram arredondados para cima
        //e o for de cima ia até DIM - 2;
        /*for ( ; i < DIM; i++) {
            temp = mult * atr[person].valor[i];
            atr[person].valor[i] = ceil(temp);
        }*/
        
        //DANO E ACERTO
        for (i = 0; i < atr[person].qtdSkill; i++) {
            /*temp = mult * atr[person].skill[i].dano;
            atr[person].skill[i].dano = ceil(temp);*/
            temp = mult * atr[person].skill[i].dano;
            atr[person].skill[i].dano = floor(temp);
            temp = mult * atr[person].skill[i].acerto;
            atr[person].skill[i].acerto = floor(temp);
        }
        atr[person].valor[1] += 10;
		
        //################# PRINTANDO VALORES NA TELA #################
        puts(atr[person].nome);
        for (i = 0; i < DIM; i++) {
            printf("%s=%d\n", nomes[i], atr[person].valor[i]);
		}

        for (i = 0; i < atr[person].qtdSkill; i++) {
			puts("--------------------");
            printf("%s\n", atr[person].skill[i].nome);
            printf("Dano=%d\nAcerto=%d\n",
                    atr[person].skill[i].dano, atr[person].skill[i].acerto);
		}
		puts("--------------------");
		
        //################## SALVANDO VALORES NUM BD ##################
        strcpy(nomeBD, nome);
        strcat(nomeBD, ".txt");
		
        if ( (pa = fopen(nomeBD, "w")) == NULL) {
            puts("Nao foi carregado fluxo ao ponteiro FILE");
            system("pause");
        }
        //NOME
        fputs(atr[person].nome, pa); fputc('\n', pa);
        //ATRIBUTOS
        for (i = 0; i < DIM; i++) {
            fprintf(pa, "%s=%d\n", nomes[i], atr[person].valor[i]);
		}
        //HABILIDADES
		fputs("--------------------\n", pa);
		fputs("Skills:\n", pa);
        for (i = 0; i < atr[person].qtdSkill; i++) {
			fputs("--------------------\n", pa);
			fprintf(pa, "%s\n", atr[person].skill[i].nome);
			fprintf(pa, "Dano: %d\n", atr[person].skill[i].dano);
			fprintf(pa, "Acerto: %d\n", atr[person].skill[i].acerto);
		}
		fputs("--------------------", pa);
        
        fclose(pa);
        
		//############## CRIANDO UM BAT E ABRINDO O TXT ###############
		//criando um .bat
		pa = fopen("exaustao.bat", "w");
		//fputs("exaustao.exe\n", pa);
		fputs(nomeBD, pa);
		fclose(pa);
		system("start exaustao.bat");
		system("exit");
		
		//################## CONTINUANDO OU FECHANDO ##################
        i = TRUE;
        printf("\n[1]Continua [0]Sai: "); scanf(" %d", &i);
    
    } while (i != FALSE);
    
    puts("Encerrando programa");
    system("pause>>null");
    return 0;
}
