#include <stdio.h>
#include<string.h>

int main(){
    char x[100];
    printf("entre une phrase : ");
    fgets(x,100,stdin);
    int r=0;
    while (x[r]!='\0'){
         r++;
    }
    printf("\n%d",r-1);
    
    return 0;
}
