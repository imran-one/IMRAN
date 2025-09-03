#include<stdio.h>
#include<math.h>
int main(){
    float x1, y1, z1;
    float x2, y2, z2;
    float distance;
    printf("enter the coordinates1: ");
    scanf("%f%f%f", &x1,&y1,&z1);

    printf("enter the coordinates2: ");
    scanf("%f%f%f", &x2,&y2,&z2);

    distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));

    printf("%.2f", distance);

    return 0;
}
