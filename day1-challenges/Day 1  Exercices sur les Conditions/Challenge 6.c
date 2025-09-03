#include <stdio.h>

int main() {
    float a;
    printf("enter nmber: ");
    scanf("%f", &a);
    if (a<0){
        printf("Négatif");
    }else if (a==0){
        printf("Nul");
    }else if (a>0){
    printf("Positif");
    }
    return 0;
}
