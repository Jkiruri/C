#include <iostream>

int sum(int x, int y);

int main()
{
    int x, y, z;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    z = sum(x, y);

    printf("The sum of x & y = %d\n", z);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
