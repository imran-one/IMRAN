#include <stdio.h>

int main() {
    char c;
    printf("enter character: ");
    scanf("%c",&c);
    if (c>=65 && c<=90){
        printf("se caractére est une lettre majuscule");
    }else printf("il n'est pas majuscule");
    return 0;
}
