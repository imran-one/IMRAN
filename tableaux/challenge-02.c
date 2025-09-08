#include <stdio.h>

int main(){

    int nombre;
    printf("entre nombre d element: ");
    scanf("%d",&nombre);


    int tableau[nombre];
    int i;
    for ( i=0;i<nombre;i++){
        int element;
        printf("entre chaque element: ");
        scanf("%d", &element);
        tableau[i]=element;
    }
    for (i=0; i<nombre;i++){
        printf("\nla valeur du tableau[%d] est : %d",i,tableau[i]);

    }
    return 0;
}