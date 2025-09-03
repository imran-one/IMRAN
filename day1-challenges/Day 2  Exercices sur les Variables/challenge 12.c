#include<stdio.h>
int main(){
    int a,b,c,d;
    int namber;

    printf("enter nambers: ");
    scanf("%d",&namber);

    a=namber%10;
    printf("%d",a);
    namber=namber/10;

    b=namber%10;
    printf("%d",b);
    namber=namber/10;

    c=namber%10;
    printf("%d",c);
    namber=namber/10;

    d=namber%10;
    printf("%d",d);
    namber=namber/10;

    return 0;
}
