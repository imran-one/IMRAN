#include <stdio.h>
#include <string.h>
int main()  {

     char tab1[1000]="";
     char tab2[1000]="";

     printf("entre la phrase1: ");
     fgets(tab1,100,stdin);

     printf("entre la phrase2: ");
     fgets(tab2,100,stdin);

     strcmp(tab1 ,tab2);

     if (strcmp(tab1 ,tab2) == 0 ) printf("les deux chaînes sont identiques");
     else printf("les deux chaînes ne sont pas identiques");

    return 0;
}
