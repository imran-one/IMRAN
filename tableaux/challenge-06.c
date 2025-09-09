#include <stdio.h>

#define length 6


int main(){
    char hello[length] = {'h','e','l','l','o','\0'};
    
    char h[length] = {'_','_','_','_','_','\0'};
    
    char guess;
    int correctGuess = 0;
    int tentative = 3;
        while(correctGuess< length -1){
            int trv=0;
            printf("veillez entrer le cerecter : ");
            scanf("%c",&guess);
            
            for( int i = 0 ;i< length -1;i++) {
                if (hello[i]==guess && h[i]=='_'){
                    h[i] = guess ;
                    trv = 1 ;
                    correctGuess++;
                }
            }
            if(trv){
                printf("trouve\n"); 
            }else{
                tentative--;
                printf("il rest que %d tentetive \n", tentative);
            }
            printf("word : %s\n",h);
        }
        if (correctGuess == length -1 ){
            printf("you win !!!");
        }
    
    
}