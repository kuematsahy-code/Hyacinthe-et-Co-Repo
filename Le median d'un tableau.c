#include <stdio.h>

// Fonction qui effectue une multiplication par addition répétée
int multiplicationParAddition(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int main() {
    int a, b;

    // Demande à l'utilisateur de saisir les deux entiers
    printf("Entrez le premier entier (a) : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier (b) : ");
    scanf("%d", &b);

    // Calcul du produit par addition répétée
    int produit = multiplicationParAddition(a, b);

    // Affichage du résultat
    printf("%d × %d = %d\n", a, b, produit);

    return 0;
}
