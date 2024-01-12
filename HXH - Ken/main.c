#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int aop;
    float refor, pop, ren, cda; //classe de aura

    printf("Calculadora de Ken em PT_BR\n\n");

    for(;;){
        printf("Digite o valor de REF: ");
        scanf("%f", &refor);
        printf("Digite o valor de AOP: ");
        scanf("%d", &aop);
        printf("Digite o valor de POP: ");
        scanf("%f", &pop);
        printf("Digite o valor de CDA: ");
        scanf("%f", &cda);

        ren = aop*(1+(pop+refor)/10)*cda;

        printf("Os valores de RYU são\n");
        printf("05%%=%.0f\n", ren*0.05);
        printf("10%%=%.0f\n", ren*0.1);
        printf("15%%=%.0f\n", ren*0.15);
        printf("20%%=%.0f\n", ren*0.2);
        printf("25%%=%.0f\n", ren*0.25);
        printf("30%%=%.0f\n", ren*0.3);
        printf("35%%=%.0f\n", ren*0.35);
        printf("40%%=%.0f\n", ren*0.4);
        printf("45%%=%.0f\n", ren*0.45);
        printf("KEN=%.0f\n", ren*0.5);
        printf("55%%=%.0f\n", ren*0.55);
        printf("60%%=%.0f\n", ren*0.6);
        printf("65%%=%.0f\n", ren*0.65);
        printf("70%%=%.0f\n", ren*0.7);
        printf("75%%=%.0f\n", ren*0.75);
        printf("80%%=%.0f\n", ren*0.8);
        printf("85%%=%.0f\n", ren*0.85);
        printf("90%%=%.0f\n", ren*0.9);
        printf("95%%=%.0f\n", ren*0.95);
        printf("KOU=%.0f\n\n", ren);
    }

    system("pause>>null");
    return 0;
}
