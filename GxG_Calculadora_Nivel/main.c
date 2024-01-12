#include "algoritmo.h"

int main() {
    int opcao, lvl, exp, i;

    //int expLvl[];


    if (!init()) {
        return 1;
    }

    while (1) {
        printf("[1]NEN\n[2]LVL\n[3]MOP\nO que deseja calcular? ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                while (1) {
                    puts("\n[-1]Menu");
                    printf("Digite o LV do atributo Nen: ");
                    scanf("%d", &lvl);

                    if (lvl < 0) {
                        printf("----------------------------------------------\n");
                        break;
                    } else if (lvl == 0) {
                        lvl = 1;
                    }

                    printf("Digite a Exp ganha no atributo Nen: ");
                    scanf("%d", &exp);

                    for (i = lvl; exp > 0; i++) {
                        exp -= getExpNen(i);
                    }

                    if (exp < 0) {
                        printf("Lv Nen=%d, Exp=%d\n", i - 1, exp + getExpNen(i - 1));
                    } else {
                        printf("Lv Nen=%d, Exp=%d\n", i, exp);
                    }
                }
                break;
        }
    }
}
