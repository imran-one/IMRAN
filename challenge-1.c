#include<stdio.h>

int main(){
    int a;
    printf("enter namber: ");
    scanf("%d", &a);
    for ( int i = 1; i <= 10; i++)
    {
        int m = a*i;
        printf("%d * %d = %d \n", a , i , m);
    }
    return 0 ;
    
}