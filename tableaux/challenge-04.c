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
    int max=0;
    
    for (i=0;i<nombre;i++){
        
        if (max<tableau[i]){
            max=tableau[i];
        } 
        
    }
    printf("\nl element le plus grand dans le tableau est: %d",max);

    return 0;


}