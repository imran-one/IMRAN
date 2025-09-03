#include <stdio.h>

int main() {
      char fname[52];
      char lname[52];
      int age;
      char sexe[22];
      char email[42];


printf("enter your first name : ");
scanf("%s" , fname);

printf("enter your last name  : ");
scanf("%s" ,  lname);

printf("enter your age : ");
scanf("%d" , &age );

printf("enter your sexe (male or a female )");
scanf("%s" ,sexe);

printf("enter your personal email : ");
scanf("%s" , email);

printf("first name : %s\n" , fname);
printf("last name : %s\n" , lname);
printf("Age : %d\n" , age);
printf("sexe : %s\n" , sexe);
printf("personal email : %s" , email);







    return 0;
}
