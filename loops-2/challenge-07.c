#include <stdio.h>

int main() {
    
    int nmbr;
    
    printf("Entre a nombre : ");
    scanf("%d" , &nmbr);
    
    int nmbr1=0 , nmbr2=1 , nmbr3;
    printf("%d, " , nmbr1);
    
    printf("%d, " , nmbr2);
    
    for(int i=2;i<=nmbr; i++) {
        
        nmbr3=nmbr1+nmbr2;
        
        if (nmbr3<nmbr*nmbr) printf("%d, " , nmbr3);
        
        if (nmbr3==(nmbr*nmbr)) printf("%d " , nmbr3);
        
        nmbr1=nmbr2;
        
        nmbr2=nmbr3;
        
    }

    return 0;
}
