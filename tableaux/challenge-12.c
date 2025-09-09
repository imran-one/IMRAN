#include <stdio.h>

int main(){
    
    int tab[5] = {1,2,3,4,5};
    for (int i=0;i<5;i++){
        if (tab[i]%2==0) 
        printf("les nombre impaire dans ce tableau est : %d ",tab[i]);
    }
    return 0;
}
