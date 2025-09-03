#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    printf("enter nembers: ");
    scanf("%d%d%d", &a,&b,&c);

    int total=pow(b,2)-4*a*c;

    if (total<0){
        printf("Pas de solution réelle");
    }else if (total==0){
        printf("Une solution double");
    }else if(total >0){
        printf("Deux solutions réelles distinctes");
    }
    return 0;
}
