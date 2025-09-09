#include<stdio.h>

int somme(int a,int b){
    return a+b;
    
}

int main(){
    int a,b;
    printf("entre le nombre a : ");
    scanf("%d", &a );
    printf("entre le nombre b : ");
    scanf("%d", &b );

    
    printf("la somme de les deux nombre %d et %d est : %d", a,b,somme(a,b));
    return 0;
    
}