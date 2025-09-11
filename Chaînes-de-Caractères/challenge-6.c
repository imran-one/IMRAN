#include <stdio.h>
#include<string.h>

int main(){

    char in[500];
    char c;
    int f=0;
    printf("entre une phrase: ");
    fgets(in,500,stdin);
    
    printf("entre le caractere a rechercher : ");
    scanf("%c",&c);

    for (int i = 0; in[i]!='\0' ; i++)
    {
        if (in[i] == c){
            f++;
        }
    }
    if (f==0) printf("le caracter '%c' est introuvable.\n",c);
    else printf("le caractere '%c'  apparait %d fois dans la chaine.\n",c,f);
    
    return 0;
}