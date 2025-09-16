#include<stdio.h>

struct cercle{
    double rayon;
};

double calcule_aire(struct cercle c){
    double aire = 3.14 * c.rayon * c.rayon ;
    return aire;
}

int main(){
    struct cercle r;
    printf("entrez rayon du cercle: ");
    scanf("%lf",&r.rayon);
    double aire = calcule_aire(r);
    
    printf("%.2lf",aire);

    return 0;
}