#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};

float aire_de_rectangle(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &rect.longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &rect.largeur);

    float aire = aire_de_rectangle(rect);
    printf("l aire du rectangle est : %.2f\n", aire);

    return 0;
}