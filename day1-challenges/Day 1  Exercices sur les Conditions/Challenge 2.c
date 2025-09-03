#include<stdio.h>
int main(){

    char lettre;
    printf("entre lettre: ");
    scanf("%c", &lettre);

    switch (lettre){
    case 'a':
        printf("voyelle");
        break;
    case 'A':
        printf("voyelle");
        break;
    case 'i':
        printf("voyelle");
        break;
    case 'I':
        printf("voyelle");
        break;
    case 'o':
        printf("voyelle");
        break;
    case 'O':
        printf("voyelle");
        break;
    case 'e':
        printf("voyelle");
        break;
    case 'E':
        printf("voyelle");
        break;
    case 'u':
        printf("voyelle");
        break;
    case 'U':
        printf("voyelle");
        break;
    default :
        printf("n'est pas voyelle");
        break;
    }
    return 0;
}
