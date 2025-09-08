#include <stdio.h>

int main(){

    int nombre;
    printf("entre nombre d element: ");
    scanf("%d",&nombre);


    int tableau[nombre];
    int i;
    int element,somme=0;
    for ( i=0;i<nombre;i++){
        
        printf("entre chaque element: ");
        scanf("%d", &element);
        tableau[i]=element;
        somme+=element;
    }
    for (i=0; i<nombre;i++){
        printf("\nla valeur du tableau[%d] est : %d",i,tableau[i]);

    }
    printf("\nla somme de elements est : %d",somme);
    return 0;
}