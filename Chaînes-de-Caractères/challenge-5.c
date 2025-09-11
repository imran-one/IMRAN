#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[]){
    int debut = 0;
    int fin = strlen(str)-1;
    while (debut<fin)
    {
        char cap = str[debut];
        str[debut] = str[fin];
        str[fin] = cap;
        debut++;
        fin--;
    }

}

int main(){

    char tab[10]="";
    int len=strlen(tab)-1;

    printf("entre des carateres: ");
    fgets(tab,100,stdin);
    inverser_chaine(tab);
    printf("%s",tab);


    return 0;
}
