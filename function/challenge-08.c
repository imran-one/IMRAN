#include <stdio.h>

int est_pair(int nombre){
    if(nombre%2==0) 
    {
        return 1;
    }else return 0;
}
int main(){
    int num;
    printf("entre un nombre: ");
    scanf("%d",&num);
    if (est_pair(num)){
        printf("le nombre %d est pair.",num);
    }else printf("le nombre %d est impair.",num);
    return 0;
}