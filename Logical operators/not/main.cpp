#include <cstdio>

int main() {
    int num;

    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);

    // Check if the number is NOT within the range of 50 to 80
    if (!(num >= 50 && num <= 80)) {
        printf("The number is NOT within the range of 50 to 80.\n");
    } else {
        printf("The number is within the range of 50 to 80.\n");
    }

    return 0;
}
