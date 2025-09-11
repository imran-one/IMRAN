#include <stdio.h>
#include<string.h>

int main() {
    char str1[50] = "imran ";
    char str2[50] = "benmiloud ";

    strcat(str1, str2);

    printf("%s", str1);

    return 0;
}
