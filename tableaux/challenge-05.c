#include<stdio.h>

int main(){

    int nombre;
    printf("entre nombre d element: ");
    scanf("%d",&nombre);
    int tableau[nombre];
    int i,element;
    
    for ( i=0;i<nombre;i++){
        printf("entre element %d: ",(i+1));
        scanf("%d", &element);
        tableau[i]=element;
    }
    int min=tableau[nombre-1];
    
    for (i=nombre-1;i>=0;i--){
        
        if (min>tableau[i]){
            min=tableau[i];
        } 
        
    }
    printf("\nl element le plus petit dans le tableau est: %d",min);

    return 0;


}