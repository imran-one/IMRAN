#include<stdio.h>
int main() {
    char l;
    printf("entre caracter : ");
    scanf("%c",&l);

    if (l<=90 && l>=65){
        printf("c'est une lettre alphabétique majuscule");
    }else if (l<=122 && l>=97){
        printf("c'est une lettre alphabétique minuscule");
    }else printf("ce n'est pas un alphabé");


    return 0;
}
