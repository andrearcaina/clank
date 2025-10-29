#include <stdio.h>

int main() {
    // variables
    int number = 5;
    printf("%d", number);

    float decimal = number;
    printf("%.2f", decimal);

    double decimal2 = decimal;

    printf("%.2f", decimal2);

    // string
    char name[] = "andre";
    printf("%s", name);

    return 0;
}