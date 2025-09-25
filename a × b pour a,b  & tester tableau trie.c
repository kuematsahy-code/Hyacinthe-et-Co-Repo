
#include <stdio.h>
// -------------------------
// Exercice 4 : Multiplication par addition successive
// -------------------------
int multiplication(int a, int b) {
int resultat = 0;
for (int i = 0; i < b; i++) {
resultat = resultat + a;
}
return resultat;
}
// -------------------------
// Exercice 5 : Tester si un tableau est trie (croissant)
// -------------------------
int estTrie(int tab[], int n) {
for (int i = 0; i < n - 1; i++) {
if (tab[i] > tab[i + 1]) {
return 0; // pas trié
}
}
return 1; // trié
}
// -------------------------
// Programme principal
// ------------
int main() {
int a, b;
printf("Entrez a (>0) : ");
scanf("%d", &a);
printf("Entrez b (>0) : ");
scanf("%d", &b);
if (a > 0 && b > 0) {
int resultat = multiplication(a, b);
printf("%d x %d = %d\n", a, b, resultat);
} else {
printf("Erreur : a et b doivent etre positifs\n");
}
int n;
printf("\nEntrez la taille du tableau : ");
scanf("%d", &n);
int tab[50]; // tableau de taille max 50
printf("Entrez les elements :\n");
for (int i = 0; i < n; i++) {
scanf("%d", &tab[i]);
}
if (estTrie(tab, n)) {
printf("Le tableau est trie.\n");
} else {
printf("Le tableau n'est pas trie.\n");
}
return 0;
}
