#include <stdio.h>

int main() {
    int num;
    float price;
    char grade;
    printf("enter an integer, a float and a character:");
    scanf("%d %f %c", &price, &grade);
    printf("\ninteger: %d\n", num);
    printf("float:%.2f\n", price);
    printf("character: %c\n", grade);

    return 0;
}