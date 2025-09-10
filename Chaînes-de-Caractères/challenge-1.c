#include <stdio.h>
#include<string.h>

int main(){
    
    char tab[1][100];

    printf("entre une phrase: ");
    fgets(tab,100,stdin);

    printf("ton phrase est: %s",tab);
    return 0;

}