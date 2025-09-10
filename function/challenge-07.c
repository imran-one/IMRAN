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
    char str[]={"i,m,r,a,n,e"};
    printf("%s",str);
    printf("\n");
    inverser_chaine(str);
    printf("%s",str);
    return 0;
}