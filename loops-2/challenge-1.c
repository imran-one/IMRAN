
#include <stdio.h>

int main() {
    int i;
    int some;
    printf("enter your number: ");
    scanf("%d",&i);
    for(int j = 1 ; j<=10;j++){
        some= i * j ;
        printf("\n%d * %d = %d",i,j,some);
    }

    return 0;
}