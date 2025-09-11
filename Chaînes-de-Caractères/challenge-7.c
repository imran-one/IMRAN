#include <stdio.h>
#include <ctype.h>


int main(){
    char tab[100];

    printf("entre une phrase: ");
    fgets(tab,100,stdin);

    for (int i = 0;tab[i]!='\0'; i++)
    {
        tab[i]=tolower(tab[i]);
    }
    printf("%s\n",tab);
    return 0;
    
}