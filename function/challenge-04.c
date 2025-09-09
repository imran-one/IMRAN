#include<stdio.h>

int minimum(int a,int b){
    if (a<b){
        return a;
    }else return b;
    
}

int main(){
    int a,b;
    printf("entre le nombre a : ");
    scanf("%d", &a );
    printf("entre le nombre b : ");
    scanf("%d", &b );

    printf("le plus petit nombre est : %d", minimum(a,b));
    return 0;
    
}