#include <stdio.h>

int main() {
    float m;
    printf("entre ton moyenne: ");
    scanf("%f",&m);
    if (m<10){
        printf("ton mention: Échec(Recalé)");

    }else if (m>=10 && m<12){
        printf("ton mention: Passable");

    }else if (m>=12 && m<14){
     printf("ton mention: Assez Bien");

    }else if (m>=14 && m<16){
        printf("ton mention: Bien");

    }else if (m<=16){
        printf("ton mention: Très Bien");
    }

    return 0;
