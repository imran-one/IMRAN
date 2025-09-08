#include <stdio.h>

int main(){

    int nombre;
    printf("entre nombre d element: ");
    scanf("%d",nombre);


    int tableau[nombre];

    for (i=0;i<nombre;i++){
        int element;
        printf("entre chaque element: ");
        scanf("%d",&element);

        tableau[i]+=element;
    }
    printf("[");
    printf("%d,",tableau[i]);
    printf("]");



    return 0;

}