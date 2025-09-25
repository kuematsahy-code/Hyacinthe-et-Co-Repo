#include <stdio.h>

int main() {
    int lignes, colonnes, i, j;

    // Demander les dimensions des matrices
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &colonnes);

    // Déclarer les matrices
    int matrice1[lignes][colonnes];
    int matrice2[lignes][colonnes];
    int resultat[lignes][colonnes];

    // Saisir les éléments de la première matrice
    printf("\nEntrez les elements de la premiere matrice :\n");
    for (i = 0; i < lignes; ++i) {
        for (j = 0; j < colonnes; ++j) {
            printf("Element mat1[%d][%d] : ", i, j);
            scanf("%d", &matrice1[i][j]);
        }
    }

    // Saisir les éléments de la deuxième matrice
    printf("\nEntrez les elements de la deuxieme matrice :\n");
    for (i = 0; i < lignes; ++i) {
        for (j = 0; j < colonnes; ++j) {
            printf("Element mat2[%d][%d] : ", i, j);
            scanf("%d", &matrice2[i][j]);
        }
    }

    // Calculer la somme des matrices
    for (i = 0; i < lignes; ++i) {
        for (j = 0; j < colonnes; ++j) {
            resultat[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }

    // Afficher la matrice résultat
    printf("\nLa somme des matrices est :\n");
    for (i = 0; i < lignes; ++i) {
        for (j = 0; j < colonnes; ++j) {
            printf("%d\t", resultat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
