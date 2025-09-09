# include <stdio.h>

int main() {

    int n;
    printf("entre un nombre : ");
    scanf("%d",&n);

    int tab1[10]={1,2,3,4,5,6,7,8,9,10};
    int tab2[10];
    int result;
    int i;
    for ( i=0;i<10;i++){
        result=n*tab1[i];
        tab2[i]=result;
    }
    for (i=0;i<10;i++){
        printf("\n %d*%d=%d ",n,tab1[i],tab2[i]);
    }

    return 0;
}