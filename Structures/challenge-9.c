#include <stdio.h>
#include <string.h>

struct Compte {
    char nom[50];
    double solde;
};

double bonus(struct Compte b){
    double bonus = b.solde * 1.5;
    return bonus;
}

int main(){
    struct Compte p;
    printf("entrez le nom du client: ");
    fgets(p.nom,sizeof(p.nom),stdin);
    p.nom[strcspn(p.nom, "\n")]= '\0';

    printf("entrez solde du client: ");
    scanf("%lf",&p.solde);

    printf("Solde initial de %s : %.2f\n", p.nom, p.solde);
    p.solde= bonus(p);
    printf("Nouveau solde de %s : %.2f\n", p.nom, p.solde);

    return 0;


}
