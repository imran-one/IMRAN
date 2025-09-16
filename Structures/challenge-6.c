#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nom[100];
    float prix;
    int quentite;
}produit;

void produits(produit p1[], int p){

    for (int i = 0 ; i<p;i++){
        getchar();
        printf("entrez le nom de produit: ");
        fgets(p1[i].nom,sizeof(p1[i].nom),stdin);
        p1[i].nom[strcspn(p1[i].nom, "\n")] = '\0';

        printf("entrez prix de produit: ");
        scanf("%f",&p1[i].prix);
        printf("entrez la quantite de produit: ");
        scanf("%d",&p1[i].quentite);

    }

}

int main(){

    int p;
    
    printf("entrez votre nombres de produits: ");
    scanf("%d",&p);
    produit p1[p];
    produits(p1,p);


    printf("\n===les produits===\n");
    for (int i =0 ; i<p;i++){
        printf("%s : %.2fdh , %dpsc\n", p1[i].nom,p1[i].prix,p1[i].quentite);
    }
    return 0;

}
