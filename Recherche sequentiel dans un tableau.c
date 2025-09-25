#include <stdio.h>

int main() {
    int taille, i, valeurRecherchee;
    int position = -1; // -1 pour indiquer que l'element n'a pas ete trouve initialement

    // Demander la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    // Declarer le tableau
    int tableau[taille];

    // Remplir le tableau
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < taille; ++i) {
        printf("Element %d : ", i);
        scanf("%d", &tableau[i]);
    }

    // Demander la valeur a rechercher
    printf("\nEntrez la valeur a rechercher : ");
    scanf("%d", &valeurRecherchee);

    // Effectuer la recherche sequentielle
    for (i = 0; i < taille; ++i) {
        if (tableau[i] == valeurRecherchee) {
            position = i; // Enregistrer la position si l'element est trouve
            break; // Sortir de la boucle des que l'element est trouve
        }
    }

    // Afficher le resultat
    if (position != -1) {
        printf("L'element %d a ete trouve a la position (index) : %d\n", valeurRecherchee, position);
    } else {
        printf("L'element %d n'est pas dans le tableau.\n", valeurRecherchee);
    }

    return 0;
}
