#include <stdio.h>

int main() {
    int n, f = 1;
    
    printf("Enter numbre: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Erreur, numbre is negatif!\n");
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    printf("%d != %d\n", n, f);
    return 0;
}
