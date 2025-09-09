#include <stdio.h>

int main(){
    int tab1[5] = {1,2,3,4,5};
    int tab2[5] ;
    int i;
    int copi;
    printf("l origin de tableau est : ");
    for ( i = 0; i < 5; i++)
    {
        printf(" %d ",tab1[i]);
    }
    for ( i = 0; i < 5; i++) {

        copi=tab2[i] ;
        tab2[i]=tab1[i] ;
        tab1[i] = copi ;
    }
    
    printf("\n");
    printf("la copie de tableau est: ");
    for ( i = 0; i < 5; i++)
    {
        printf(" %d ",tab2[i]);
    }

    
    

    return 0;
}