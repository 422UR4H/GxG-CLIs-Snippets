#include <stdio.h>
#include <stdlib.h>
#define DIM 101

int main()
{
    int resp, qtd, contador, lvi, lvf, i, s=0, si=0, sf=0;
    int *atributo;
    int expAop[DIM];
    expAop[1]=100;
    expAop[2]=110;
    expAop[3]=120;
    expAop[4]=130;
    expAop[5]=140;
    expAop[6]=160;
    expAop[7]=180;
    expAop[8]=200;
    expAop[9]=220;
    expAop[10]=240;
    expAop[11]=270;
    expAop[12]=300;
    expAop[13]=330;
    expAop[14]=360;
    expAop[15]=390;
    expAop[16]=430;
    expAop[17]=470;
    expAop[18]=510;
    expAop[19]=550;
    expAop[20]=600;
    expAop[21]=650;
    expAop[22]=700;
    expAop[23]=750;
    expAop[24]=800;
    expAop[25]=850;
    expAop[26]=910;
    expAop[27]=970;
    expAop[28]=1030;
    expAop[29]=1090;
    expAop[30]=1150;
    expAop[31]=1220;
    expAop[32]=1290;
    expAop[33]=1360;
    expAop[34]=1430;
    expAop[35]=1500;
    expAop[36]=1580;
    expAop[37]=1660;
    expAop[38]=1740;
    expAop[39]=1820;
    expAop[40]=1900;
    expAop[41]=1990;
    expAop[42]=2080;
    expAop[43]=2170;
    expAop[44]=2260;
    expAop[45]=2350;
    expAop[46]=2450;
    expAop[47]=2550;
    expAop[48]=2650;
    expAop[49]=2750;
    expAop[50]=2850;
    expAop[51]=2960;
    expAop[52]=3070;
    expAop[53]=3180;
    expAop[54]=3290;
    expAop[55]=3400;
    expAop[56]=3520;
    expAop[57]=3640;
    expAop[58]=3760;
    expAop[59]=3880;
    expAop[60]=4000;
    expAop[61]=4130;
    expAop[62]=4260;
    expAop[63]=4390;
    expAop[64]=4520;
    expAop[65]=4650;
    expAop[66]=4790;
    expAop[67]=4930;
    expAop[68]=5070;
    expAop[69]=5210;
    expAop[70]=5350;
    expAop[71]=5500;
    expAop[72]=5650;
    expAop[73]=5800;
    expAop[74]=5950;
    expAop[75]=6100;
    expAop[76]=6260;
    expAop[77]=6420;
    expAop[78]=6580;
    expAop[79]=6740;
    expAop[80]=6900;
    expAop[81]=7070;
    expAop[82]=7240;
    expAop[83]=7410;
    expAop[84]=7580;
    expAop[85]=7750;
    expAop[86]=7930;
    expAop[87]=8110;
    expAop[88]=8290;
    expAop[89]=8470;
    expAop[90]=8650;
    expAop[91]=8840;
    expAop[92]=9030;
    expAop[93]=9220;
    expAop[94]=9410;
    expAop[95]=9600;
    expAop[96]=9800;
    expAop[97]=10000;
    expAop[98]=10200;
    expAop[99]=10400;
    expAop[100]=10600;

    int expPop[DIM];
    expPop[1]=300;
    expPop[2]=330;
    expPop[3]=360;
    expPop[4]=390;
    expPop[5]=420;
    expPop[6]=480;
    expPop[7]=540;
    expPop[8]=600;
    expPop[9]=660;
    expPop[10]=720;
    expPop[11]=810;
    expPop[12]=900;
    expPop[13]=990;
    expPop[14]=1080;
    expPop[15]=1170;
    expPop[16]=1290;
    expPop[17]=1410;
    expPop[18]=1530;
    expPop[19]=1650;
    expPop[20]=1800;
    expPop[21]=1950;
    expPop[22]=2100;
    expPop[23]=2250;
    expPop[24]=2400;
    expPop[25]=2550;
    expPop[26]=2730;
    expPop[27]=2910;
    expPop[28]=3090;
    expPop[29]=3270;
    expPop[30]=3450;
    expPop[31]=3660;
    expPop[32]=3870;
    expPop[33]=4080;
    expPop[34]=4290;
    expPop[35]=4500;
    expPop[36]=4740;
    expPop[37]=4980;
    expPop[38]=5220;
    expPop[39]=5460;
    expPop[40]=5700;
    expPop[41]=5970;
    expPop[42]=6240;
    expPop[43]=6510;
    expPop[44]=6780;
    expPop[45]=7050;
    expPop[46]=7350;
    expPop[47]=7650;
    expPop[48]=7950;
    expPop[49]=8250;
    expPop[50]=8550;
    expPop[51]=8880;
    expPop[52]=9210;
    expPop[53]=9540;
    expPop[54]=9870;
    expPop[55]=10200;
    expPop[56]=10560;
    expPop[57]=10920;
    expPop[58]=11280;
    expPop[59]=11640;
    expPop[60]=12000;
    expPop[61]=12390;
    expPop[62]=12780;
    expPop[63]=13170;
    expPop[64]=13560;
    expPop[65]=13950;
    expPop[66]=14370;
    expPop[67]=14790;
    expPop[68]=15210;
    expPop[69]=15630;
    expPop[70]=16050;
    expPop[71]=16500;
    expPop[72]=16950;
    expPop[73]=17400;
    expPop[74]=17850;
    expPop[75]=18300;
    expPop[76]=18780;
    expPop[77]=19260;
    expPop[78]=19740;
    expPop[79]=20220;
    expPop[80]=20700;
    expPop[81]=21210;
    expPop[82]=21720;
    expPop[83]=22230;
    expPop[84]=22740;
    expPop[85]=23250;
    expPop[86]=23790;
    expPop[87]=24330;
    expPop[88]=24870;
    expPop[89]=25410;
    expPop[90]=25950;
    expPop[91]=26520;
    expPop[92]=27090;
    expPop[93]=27660;
    expPop[94]=28230;
    expPop[95]=28800;
    expPop[96]=29400;
    expPop[97]=30000;
    expPop[98]=30600;
    expPop[99]=31200;
    expPop[100]=31800;


    int expRyu[DIM];
    expRyu[1]=10;
    expRyu[2]=20;
    expRyu[3]=30;
    expRyu[4]=40;
    expRyu[5]=50;
    expRyu[6]=60;
    expRyu[7]=70;
    expRyu[8]=80;
    expRyu[9]=90;
    expRyu[10]=100;
    expRyu[11]=120;
    expRyu[12]=140;
    expRyu[13]=160;
    expRyu[14]=180;
    expRyu[15]=200;
    expRyu[16]=230;
    expRyu[17]=260;
    expRyu[18]=290;
    expRyu[19]=320;
    expRyu[20]=350;
    expRyu[21]=390;
    expRyu[22]=430;
    expRyu[23]=470;
    expRyu[24]=510;
    expRyu[25]=550;
    expRyu[26]=600;
    expRyu[27]=650;
    expRyu[28]=700;
    expRyu[29]=750;
    expRyu[30]=800;
    expRyu[31]=860;
    expRyu[32]=920;
    expRyu[33]=980;
    expRyu[34]=1040;
    expRyu[35]=1100;
    expRyu[36]=1170;
    expRyu[37]=1240;
    expRyu[38]=1310;
    expRyu[39]=1380;
    expRyu[40]=1450;
    expRyu[41]=1530;
    expRyu[42]=1610;
    expRyu[43]=1690;
    expRyu[44]=1770;
    expRyu[45]=1850;
    expRyu[46]=1940;
    expRyu[47]=2030;
    expRyu[48]=2120;
    expRyu[49]=2210;
    expRyu[50]=2300;
    expRyu[51]=2400;
    expRyu[52]=2500;
    expRyu[53]=2600;
    expRyu[54]=2700;
    expRyu[55]=2800;
    expRyu[56]=2910;
    expRyu[57]=3020;
    expRyu[58]=3130;
    expRyu[59]=3240;
    expRyu[60]=3350;
    expRyu[61]=3470;
    expRyu[62]=3590;
    expRyu[63]=3710;
    expRyu[64]=3830;
    expRyu[65]=3950;
    expRyu[66]=4080;
    expRyu[67]=4210;
    expRyu[68]=4340;
    expRyu[69]=4470;
    expRyu[70]=4600;
    expRyu[71]=4740;
    expRyu[72]=4880;
    expRyu[73]=5020;
    expRyu[74]=5160;
    expRyu[75]=5300;
    expRyu[76]=5450;
    expRyu[77]=5600;
    expRyu[78]=5750;
    expRyu[79]=5900;
    expRyu[80]=6050;
    expRyu[81]=6210;
    expRyu[82]=6370;
    expRyu[83]=6530;
    expRyu[84]=6690;
    expRyu[85]=6850;
    expRyu[86]=7020;
    expRyu[87]=7190;
    expRyu[88]=7360;
    expRyu[89]=7530;
    expRyu[90]=7700;
    expRyu[91]=7880;
    expRyu[92]=8060;
    expRyu[93]=8240;
    expRyu[94]=8420;
    expRyu[95]=8600;
    expRyu[96]=8790;
    expRyu[97]=8980;
    expRyu[98]=9170;
    expRyu[99]=9360;
    expRyu[100]=9550;

    int level[51];
    level[1]=000;
    level[2]=100;
    level[3]=125;
    level[4]=150;
    level[5]=175;
    level[6]=200;
    level[7]=250;
    level[8]=300;
    level[9]=350;
    level[10]=400;
    level[11]=550;
    level[12]=600;
    level[13]=700;
    level[14]=800;
    level[15]=1000;
    level[16]=1200;
    level[17]=1400;
    level[18]=1600;
    level[19]=2000;
    level[20]=2400;
    level[21]=3200;
    level[22]=3500;
    level[23]=4500;
    level[24]=5500;
    level[25]=6500;
    level[26]=7500;
    level[27]=10000;
    level[28]=12500;
    level[29]=15000;
    level[30]=19000;
    level[31]=23000;
    level[32]=27000;
    level[33]=31000;
    level[34]=39000;
    level[35]=47000;
    level[36]=55000;
    level[37]=63000;
    level[38]=79000;
    level[39]=95000;
    level[40]=111000;
    level[41]=130000;
    level[42]=130000;
    level[43]=130000;
    level[44]=130000;
    level[45]=130000;
    level[46]=130000;
    level[47]=130000;
    level[48]=130000;
    level[49]=130000;
    level[50]=130000;

    //################ BLOCO DE COMANDOS ##################
    INICIO:
    printf("Quantos atributo deseja calcular: "); scanf("%d", &qtd);
    if((atributo=(int*)calloc(qtd, sizeof(int)))==NULL){
        puts("Nao foi alocado memoria ao ponteiro atributo");
        exit(1);
    }
    for(contador=0;contador<qtd;contador++){
        printf("[1]Hatsu ou AOP\n[2]En ou POP\n[3]RYU\n[4]MOP\nO que deseja calcular? ");
        scanf("%d", &resp);

        switch(resp){
        case 1:
            for(;;){
                printf("\n[-1]Menu [-2]Reset\nDigite o Lv INICIAL do Hatsu/AOP: ");
                scanf("%d", &lvi);
                if(lvi==-1){
                    contador--;
                    break;
                }

                if(lvi==-2){
                    free(atributo);
                    printf("----------------------------------------------\n");
                    return main();
                }
                printf("Digite o Lv final do Hatsu/AOP: ");
                scanf("%d", &lvf);

                for(i=lvi;i<=lvf;i++)
                    s+=expAop[i];
                atributo[contador]=s-expAop[lvi];
                printf("Exp=%d\n", atributo[contador]);
                s=0, contador++;
            }
            break;

        case 2:
            for(;;){
                printf("\n[-1]Menu [-2]Reset\nDigite o Lv INICIAL do En/POP: ");
                scanf("%d", &lvi);
                if(lvi==-1){
                    contador--;
                    break;
                }

                if(lvi==-2){
                    free(atributo);
                    printf("----------------------------------------------\n");
                    return main();
                }
                printf("Digite o Lv final do En/POP: ");
                scanf("%d", &lvf);

                for(i=lvi;i<=lvf;i++)
                    s+=expPop[i];
                atributo[contador]=s-expPop[lvi];
                printf("Exp=%d\n", atributo[contador]);
                s=0, contador++;
            }
            break;

        case 3:
            printf("\n[-1]Menu [-2]Reset\nDigite o Lv INICIAL do RYU: ");
            scanf("%d", &lvi);
            if(lvi==-1){
                contador--;
                break;
            }

            if(lvi==-2){
                free(atributo);
                printf("----------------------------------------------\n");
                return main();
            }
            printf("Digite o Lv final do RYU: ");
            scanf("%d", &lvf);

            for(i=lvi;i<=lvf;i++)
                s+=expRyu[i];
            atributo[contador]=s-expRyu[lvi];
            printf("Exp=%d\n", atributo[contador]);
            s=0;
            printf("----------------------------------------------\n");
            break;

        case 4:
            printf("\n[-1]Menu [-2]Reset\nDigite o Lv INICIAL do MOP: ");
            scanf("%d", &lvi);
            if(lvi==-1){
                contador--;
                break;
            }

            if(lvi==-2){
                free(atributo);
                printf("----------------------------------------------\n");
                return main();
            }
            printf("Digite o Lv final do MOP: ");
            scanf("%d", &lvf);

            for(i=1;1+i<=lvi;i++)
                si=lvi*10+140+si-i*10;

            for(i=1;1+i<=lvf;i++)
                sf=lvf*10+140+sf-i*10;
            atributo[contador]=sf-si;
            printf("Exp=%d\n", atributo[contador]);
            si=0, sf=0;
            printf("----------------------------------------------\n");
            break;

        default:
            printf("\nLarga de ser BURRO!!!\n");
            contador--;
            break;
        }
    }
    for(s=contador=0;contador<qtd;contador++){
        s+=atributo[contador];
    }
    printf("Quantidade de exp: %d\n", s);
    printf("[0]Continuar [1]Sair: "); scanf(" %d", &resp);
    if(resp==1){
        system("pause>>null");
        return 0;
    }
    printf("\n----------------------------------------------\n");
    s=0, si=0, sf=0;
    goto INICIO;
}
