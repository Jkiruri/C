#include <iostream>

int main() {
    int num;

    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);

    // Check if the number is both greater than 50 and less than 80
    if (num > 50 && num < 80) {
        printf("The number is between 50 and 80.\n");
    } else {
        printf("The number is not between 50 and 80.\n");
    }

    return 0;
}
