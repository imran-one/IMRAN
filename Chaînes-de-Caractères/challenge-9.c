#include <stdio.h>

int main() {
    char tab1[100];
    char tab2[100];
    int j = 0;

    printf("Entrez une phrase  : ");
    fgets(tab1, 100, stdin);

    for (int i = 0; tab1[i] != '\0'; i++) {
        if (tab1[i] != ' ') {
            tab2[j] = tab1[i];
            j++;
        }
    }

    printf("Chaine sans espaces : %s\n", tab2);

    return 0;
}