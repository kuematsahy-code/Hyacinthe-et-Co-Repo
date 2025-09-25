
#include <stdio.h>

void inverserTableau(int tableau[], int taille) {
    int debut = 0;
    int fin = taille - 1;
    
    while(debut < fin) {
        
        int temp = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = temp;
        
        debut++;
        fin--;
    }
}

void afficherTableau(int tableau[], int taille) {
    for(int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int tableau[100], taille;
    
    printf("Taille du tableau: ");
    scanf("%d", &taille);
    
    printf("Éléments du tableau:\n");
    for(int i = 0; i < taille; i++) {
        printf("tableau[%d] = ", i);
        scanf("%d", &tableau[i]);
    }
    
    printf("Tableau original: ");
    afficherTableau(tableau, taille);
    
    inverserTableau(tableau, taille);
    
    printf("Tableau inversé: ");
    afficherTableau(tableau, taille);
    
    return 0;
}