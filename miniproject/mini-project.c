#include <stdio.h>

int main() {
    float a,b,c,d,e;
    printf("enter 1er matière: ");
    scanf("%f", &a);
    printf("enter 2eme matière: ");
    scanf("%f", &b);
    printf("enter 3eme matière: ");
    scanf("%f", &c);
    printf("enter 4eme matière: ");
    scanf("%f", &d);
    printf("enter 5eme matière: ");
    scanf("%f", &e);

    float total;
    total=a+b+c+d+e;

    float moyenne;
    moyenne=total/5;

    printf("\n-----------------------------\n");

    printf(" 1er matière: %.2f\n", a);
    printf(" 2eme matière: %.2f\n", b);
    printf(" 3eme matière: %.2f\n", c);
    printf(" 4eme matière: %.2f\n", d);
    printf(" 5eme matière: %.2f\n", e);

    printf("le total des notes: %.2f\n", total);

    printf("\n-----------------------------\n");

    printf("la moyenne: %.2f\n" , moyenne);


     if (moyenne>=90){
        printf("mention globale:  Excellent");

    }else if (moyenne>=80 && moyenne <=89){
        printf("mention globale:  Très bien");
    }else if (moyenne>=70 && moyenne<=79){
        printf("mention globale:  Bien");

    }else if (moyenne>=60 && moyenne<=69){
        printf("mention globale:  Passable");

    }else if (moyenne<60){
        printf("mention globale:  Échec");
    }

    if (moyenne<50){
        printf("\ntu as : echoe");
    } else if (moyenne>=50){
        printf("\ntu as : reussi");
    }

    return 0;
}
