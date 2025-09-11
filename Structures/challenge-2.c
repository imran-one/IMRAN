#include <stdio.h>
#include <string.h>+
#define max 5
struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[max];
};
int main() {
    struct Etudiant e;
    printf("Entrez le prénom de l'etudiant : ");
    fgets(e.prenom, 50 , stdin);
    e.prenom[strcspn(e.prenom, "\n")] = '\0';

    printf("Entrez le nom de l'etudiant : ");
    fgets(e.nom, 50 , stdin);
    e.nom[strcspn(e.nom, "\n")] = '\0';

    printf("Entrez %d notes :\n", max);
    for (int i = 0; i < max; i++) {
        printf("Note %d : ", i + 1);
        scanf("%d", &e.notes[i]);
    }

    
    printf("\n--- Informations de l'etudian---\n");
    printf("Prénom : %s\n", e.prenom);
    printf("Nom    : %s\n", e.nom);
    printf("Notes  : ");
    for (int i = 0; i < max; i++) {
        printf("%d ", e.notes[i]);
    }
    printf("\n");

    return 0;
}