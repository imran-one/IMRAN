#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

struct Livre creerLivre(char titre[], char auteur[], int annee) {
    struct Livre livre;
    strcpy(livre.titre, titre);
    strcpy(livre.auteur, auteur);
    livre.annee = annee;
    return livre;
}

int main() {
    char titre[100] = "La boîte à merveilles";
    char auteur[100] = "Ahmed Sefrioui";
    int annee = 1954;

    struct Livre monLivre = creerLivre(titre, auteur, annee);

    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee : %d\n", monLivre.annee);

    return 0;
}