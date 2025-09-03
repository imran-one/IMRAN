#include<stdio.h>
#include<math.h>

int main(){
    float r;

    printf("enter rayon: ");
    scanf("%f", &r);

    double pi = 3.14159;

    float Volume = (4/3)* pi * pow(r,3);

    printf("le volume de sphère est: %.2f",Volume);

    return 0;
}
