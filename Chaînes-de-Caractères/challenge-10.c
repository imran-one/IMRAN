#include<stdio.h>
#include<string.h>

int main(){
    char tab[100]="";
    char tab1[100]="";
    
    printf("entre phrase : ");
    fgets(tab,100,stdin);

    printf("entre autre phrase : ");
    fgets(tab1,100,stdin);
    char temp[2];
    int g=0;

    for (int i=0 ; tab[i]!='\0';i++){
        
        temp[0]=tab[i];
        temp[1]='\0';
        if (strstr(tab1,temp)!=NULL){ 
            printf("la sous chaine est trouvee avec succes.");
            g=1;
            break;
        }
    }
    if (g=0){
        printf("intriyvable");
    }
    return 0;
}