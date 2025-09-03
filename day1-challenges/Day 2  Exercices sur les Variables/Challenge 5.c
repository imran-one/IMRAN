#include <stdio.h>

int main() {
    float T;
    printf("entrer la temperature: ");
    scanf("%f",&T);
    if (T<0){
        printf("solide");
    }else if (0<=T && T<100){
        printf("liquide");
    }
    else {
     printf("gaz");
    }

    return 0;
}
