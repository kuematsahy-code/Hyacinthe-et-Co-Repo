#include <stdio.h>

int main() {
    int tab[100], n, i, j, temp;
    float mediane;

    // Lire la taille du tableau
    printf("Donner le nombre d'elements : ");
    scanf("%d", &n);

    // Lire les valeurs
    printf("Donner les %d nombres :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Trier le tableau (tri à bulles, facile à comprendre)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Calculer la médiane
    if (n % 2 == 1) {
        // Si nombre impair → milieu
        mediane = tab[n / 2];
    } else {
        // Si nombre pair → moyenne des deux du milieu
        mediane = (tab[n/2 - 1] + tab[n/2]) / 2.0;
    }

    // Afficher le résultat
    printf("La mediane est : %.2f\n", mediane);

    return 0;
}
