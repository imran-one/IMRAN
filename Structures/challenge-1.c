#include<stdio.h>
#include<string.h>


struct personne
{
    char prenom[50];
    char nom[50];
    int age;
};

int main(){
    struct personne N1;
    strcpy(N1.prenom,"IMRANE");
    strcpy(N1.nom,"BENMILOUD");
    N1.age =22;

    printf("\nnom: %s",N1.nom);
    printf("\nprenom: %s",N1.prenom);
    printf("\nage: %d",N1.age);

    return 0 ;
    
}