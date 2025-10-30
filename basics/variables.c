#include <stdio.h>
#define PI 3.14159265

int main() {
    // variables
    int number = 5;
    printf("%d\n", number);

    float decimal = number;
    printf("%.2f\n", decimal);

    double decimal2 = decimal;

    printf("%.2f\n", decimal2);

    // string
    char name[] = "andre";
    printf("%s\n", name);

    // character
    char grade = 'A';
    printf("%c\n", grade);

    // const
    const int five = 5;
    // five = 10; // will get an error
    printf("%d\n", five);
    // constants can only be defined with define at the top
    printf("%.2f\n", PI);

    return 0;
}