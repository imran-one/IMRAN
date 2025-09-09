#include <stdio.h>

long long factorielle(int n){
    
    if (n==0) return 1;
    return n* factorielle(n-1);
}

int main(){
    int n;
    printf("entre le nombre : ");
    scanf("%d",&n);

    printf("%lld",factorielle(n));
    return 0;
}