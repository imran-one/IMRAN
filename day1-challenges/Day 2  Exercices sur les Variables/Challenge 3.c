#include <stdio.h>

int main() {
    float d;
    float dfr=1093.61;
    float yard;
    printf("enter distance: ");
    scanf("%f",&d);
    yard=d*dfr;
    printf("%.2f Km * %.2f = %.2f yards",d,dfr,yard);

    return 0;
}
