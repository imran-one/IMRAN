#include<stdio.h>
int main(){
    float x,y;
    printf("enter lx and ly: ");
    scanf("%f%f",&x,&y);
    float surface = x*y;
    printf("%.2f",surface);
    return 0;
}
