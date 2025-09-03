#include <stdio.h>

int main() {
    int years;
    int choice;
    int how;
    printf("enter years: ");
    scanf("%d", &years);
    printf("1 :Mois \n2 :jour \n3 :Heures \n4 :Minutes \n5 :Secondes\n your select : ");
    scanf("%d",&choice);
    switch (choice) {
    case 1 :
        how=years*12;
        printf("%d",how);
        break;
    case 2 :
        how=years*12*30;
        printf("%d",how);
        break;
    case 3 :
        how=years*12*30*24;
        printf("%d",how);
        break;
    case 4 :
        how=years*12*30*24*60;
        printf("%d",how);
        break;
    case 5 :
        how=years*12*30*24*60*60;
        printf("%d",how);
        break;
    default :
        printf("choice incorrect");
        break;
    }

    return 0;
}
