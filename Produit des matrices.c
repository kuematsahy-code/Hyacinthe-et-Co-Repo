#include <stdio.h>

int main() {
    int lignes1, colonnes1, lignes2, colonnes2, i, j, k, somme;

    // Demander les dimensions de la premiere matrice
    printf("Entrez le nombre de lignes de la premiere matrice : ");
    scanf("%d", &lignes1);
    printf("Entrez le nombre de colonnes de la premiere matrice : ");
    scanf("%d", &colonnes1);

    // Demander les dimensions de la deuxieme matrice
    printf("\nEntrez le nombre de lignes de la deuxieme matrice : ");
    scanf("%d", &lignes2);
    printf("Entrez le nombre de colonnes de la deuxieme matrice : ");
    scanf("%d", &colonnes2);

    // Verifier si la multiplication est possible
    if (colonnes1 != lignes2) {
        printf("\nErreur : Le nombre de colonnes de la premiere matrice doit etre egal au nombre de lignes de la deuxieme matrice.\n");
        return 1; // Termine le programme avec une erreur
    }

    // Declarer les matrices
    int mat1[lignes1][colonnes1];
    int mat2[lignes2][colonnes2];
    int resultat[lignes1][colonnes2];

    // Saisir les elements de la premiere matrice
    printf("\nEntrez les elements de la premiere matrice :\n");
    for (i = 0; i < lignes1; ++i) {
        for (j = 0; j < colonnes1; ++j) {
            printf("Element mat1[%d][%d] : ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Saisir les elements de la deuxieme matrice
    printf("\nEntrez les elements de la deuxieme matrice :\n");
    for (i = 0; i < lignes2; ++i) {
        for (j = 0; j < colonnes2; ++j) {
            printf("Element mat2[%d][%d] : ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialiser la matrice resultat a zero
    for (i = 0; i < lignes1; ++i) {
        for (j = 0; j < colonnes2; ++j) {
            resultat[i][j] = 0;
        }
    }

    // Calculer le produit des matrices
    for (i = 0; i < lignes1; ++i) {
        for (j = 0; j < colonnes2; ++j) {
            for (k = 0; k < colonnes1; ++k) {
                resultat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Afficher la matrice resultat
    printf("\nLe produit des matrices est :\n");
    for (i = 0; i < lignes1; ++i) {
        for (j = 0; j < colonnes2; ++j) {
            printf("%d\t", resultat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
