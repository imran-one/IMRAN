#include<stdio.h>
int main(){
    int a,b;
    int total;
    printf("enter nember: ");
    scanf("%d%d",&a,&b);
    if (a==b){
        total=(a+b)*3;
    }else{
        total=a+b;
    }
    printf("%d",total);
    return 0;
}
