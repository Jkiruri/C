#include <cstdio>

int main() {
    int num;

    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);

    // Check if the number is either greater than 50 or less than 80
    if (num > 50 || num < 80) {
        printf("The number is either greater than 50 or less than 80.\n");
    } else {
        printf("The number is not within the range of 50 to 80.\n");
    }

    return 0;
}
