#include <stdio.h>

int main() {
    double ms;
    double km ;
    double dfr = 0.277778;
    printf("enter vites: ");
    scanf("%lf",&km);
    ms = km * dfr ;
    printf("%.2lf km/h * % lf = %.2lf m/s", km ,dfr, ms);

    return 0;
}
