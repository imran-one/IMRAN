#include<stdio.h>
#include<string.h>

int main(){
    char tab[]="IMRANE";
    int r=0;

    while (tab[r]!='\0'){
        r++;
    }
    printf("%d ",r);
    return 0;
}
