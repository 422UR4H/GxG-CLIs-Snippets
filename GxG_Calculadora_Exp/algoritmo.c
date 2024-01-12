#include "algoritmo.h"
#define EXP_NEN 90

int expNen[EXP_NEN];

int init() {
    FILE *expNenArq;
    int i;

    if (!(expNenArq = fopen("exp_nen.txt", "r"))) {
        puts("Erro na leitura");
        return FALSE;
    }

    for (i = 1; i < EXP_NEN; i++) {
        fscanf(expNenArq, "%d", &expNen[i]);
    }

    // leitura de outras tabelas

    fclose(expNenArq);
    return TRUE;
}

int getExpNen(int i) {
    if (i < 1 || i >= EXP_NEN) {
        return FALSE;
    }
    return expNen[i];
}
