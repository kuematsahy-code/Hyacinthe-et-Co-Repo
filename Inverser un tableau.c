
#include <stdio.h>

void produitVectoriel(int vecteurA[], int vecteurB[], int resultat[], int dimension) {
    if(dimension != 3) {
        printf("Le produit vectoriel n'est défini que pour les vecteurs 3D\n");
        return;
    }
    
    resultat[0] = vecteurA[1] * vecteurB[2] - vecteurA[2] * vecteurB[1];
    resultat[1] = vecteurA[2] * vecteurB[0] - vecteurA[0] * vecteurB[2];
    resultat[2] = vecteurA[0] * vecteurB[1] - vecteurA[1] * vecteurB[0];
}

void afficherVecteur(int vecteur[], int dimension) {
    printf("(");
    for(int i = 0; i < dimension; i++) {
        printf("%d", vecteur[i]);
        if(i < dimension - 1) printf(", ");
    }
    printf(")\n");
}

int main() {
    int vecteurA[3], vecteurB[3], resultat[3];
    
    printf("Vecteur A (3 composantes):\n");
    for(int i = 0; i < 3; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &vecteurA[i]);
    }
    
    printf("Vecteur B (3 composantes):\n");
    for(int i = 0; i < 3; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &vecteurB[i]);
    }
    
    produitVectoriel(vecteurA, vecteurB, resultat, 3);
    
    printf("A × B = ");
    afficherVecteur(resultat, 3);
    
    return 0;
}