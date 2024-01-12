#include "algoritmo.h"

int main() {
    int qtd, contador, opcao, lvi, lvf, i;
    int nivel = 0;
    int *atributo;

    if (!init()) {
        return 1;
    }

    printf("Quantos atributo deseja calcular: ");
    scanf("%d", &qtd);

    if ((atributo = (int*) calloc(qtd, sizeof (int))) == NULL) {
        puts("Nao foi alocado memoria ao ponteiro atributo");
        exit(1);
    }

    for (contador = 0; contador < qtd; contador++) {
        printf("[1]NEN\n[2]MOP\nO que deseja calcular? ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                while (1) {
                    printf("\n[-1]Menu [-2]Reset\nDigite o Lv INICIAL do atributo Nen: ");
                    scanf("%d", &lvi);
                    if (lvi == -1) {
                        contador--;
                        break;
                    }

                    if (lvi == -2) {
                        free(atributo);
                        printf("----------------------------------------------\n");
                        return main();
                    }

                    printf("Digite o Lv final do atributo Nen: ");
                    scanf("%d", &lvf);

                    for (i = lvi; i <= lvf; i++) {
                        nivel += getExpNen(i);
                    }
                    atributo[contador] = nivel - getExpNen(lvi);
                    printf("Exp=%d\n", atributo[contador]);
                    nivel = 0, contador++;
                }
                break;

            case 2:
                while (1) {
                    printf("\n[-1]Menu [-2]Reset\nDigite o Lv INICIAL do MOP: ");
                    scanf("%d", &lvi);
                    if (lvi == -1) {
                        contador--;
                        break;
                    }

                    if (lvi == -2) {
                        free(atributo);
                        printf("----------------------------------------------\n");
                        return main();
                    }

                    printf("Digite o Lv final do MOP: ");
                    scanf("%d", &lvf);

                    // algoritmo errado, colocar o de MOP
                    for (i = lvi; i <= lvf; i++) {
                        nivel += getExpNen(i);
                    }
                    atributo[contador] = nivel - getExpNen(lvi);
                    printf("Exp=%d\n", atributo[contador]);
                    nivel = 0, contador++;
                }
                break;
        }
    }
}
