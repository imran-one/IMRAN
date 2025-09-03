#include<stdio.h>
#include<math.h>
int main(){
    float a;
    float b;
    float c;
    float total,moyenne;

    printf("enter nember1: ");
    scanf("%f",&a);

    printf("enter nember2: ");
    scanf("%f",&b);

    printf("enter nember3: ");
    scanf("%f",&c);

    total= a*b*c;

    moyenne = pow(total,1.0/3.0);
    printf("Moyenne géométrique = %.2f",moyenne);
    return 0;
}
