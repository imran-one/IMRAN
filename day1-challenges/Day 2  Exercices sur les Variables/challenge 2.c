#include <stdio.h>
int main () {

    int tempurature;
    int kelvin;

    printf("enter the temperature you want to transform to kelven : ");
    scanf("%d" , &tempurature);

    kelvin= tempurature +273.15;

    printf("The temperature in kelven is : %d" , kelvin);

    return 0;
}
