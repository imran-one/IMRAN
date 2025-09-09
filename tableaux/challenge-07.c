#include <stdio.h>

int main(){
    int tab1[5]={1,16,6,0,9};
    int i;
    int cap;
    int x = 0;
    while (x < 5)
    {
        
        for ( i=0; i<5;i++){
            if (tab1[i]>tab1[i+1]){
                cap = tab1[i+1] ;
                tab1[i+1]=tab1[i];
                tab1[i]= cap;
            }
        }
        x++;
    }
    printf("[");
    for (i=0;i<5;i++){
    printf(" %d ",tab1[i]);
    }
    printf("]");
    return 0;

}