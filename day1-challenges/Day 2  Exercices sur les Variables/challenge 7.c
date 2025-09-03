#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    float moyenne;

    printf("enter nember1: ");
    scanf("%f",&a);

    printf("enter nember2: ");
    scanf("%f",&b);

    printf("enter nember3: ");
    scanf("%f",&c);

    moyenne = (a*2+b*3+c*5)/10;
    printf("Moyenne = %.2f",moyenne);
    return 0;
}
