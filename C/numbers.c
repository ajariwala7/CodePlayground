#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Enter an integer: ");
    int int1 = 0;
    scanf("%d", &int1);

    printf("Your integer is: %d\n", int1);

    printf("Enter your name: ");
    char* name = malloc(sizeof(char) * 20);
    scanf("%s", name);

    printf("Your name is: %s\n", name);
    free(name);

    return 0;
}