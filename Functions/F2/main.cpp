#include <cstdio>

int sum();

int main()
{
    printf("Calculating the sum of two numbers\n");
    sum();
    return 0;
}

int sum()
{
    int a, b;
    int c;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The sum = %d\n", c);
    return c;
}
