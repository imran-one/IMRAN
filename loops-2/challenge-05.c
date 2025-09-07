#include <stdio.h>

int main(){
    int nmbr;
    printf("entre nombre : ");
    scanf("%d",&nmbr);
    int i,j,p

    for ( i = 1 ; i <= nmbr;i++){
            p= 1;
        for ( j= 2 ; j*j<= i ; j++)
            if (i%j==0){
                p=0;
                break;
            }
            if (p)
                printf(" %d,",i);
    }

    while (i>0){
        i=nmbr*(nmbr+1)/2;


    }
    printf("%d",i);

    return 0;

}
