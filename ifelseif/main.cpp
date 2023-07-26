#include <iostream>

int temp;

int main()
{
    printf("Enter temperature\n");
    scanf("%d", &temp);
    
    if (temp >= 0 && temp <= 5)
    {
        printf("It is freezing cold!!\n");
        printf("Wear something warm!!\n");
    }
    else if (temp >= 6 && temp <= 11)
    {
        printf("It is extremely cold!!\n");
        printf("Keep yourself warm!!\n");
    }
    else if (temp >= 12 && temp <= 18)
    {
        printf("It is not very cold!!\n");
        printf("Take hot drinks!!\n");
    }
    else if (temp >= 19 && temp <= 24)
    {
        printf("It is warm today!!\n");
        printf("Wear lightly!!\n");
    }
    else if (temp >= 25 && temp <= 37)
    {
        printf("It is hot today!!\n");
        printf("Drink a lot of fluids!!\n");
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}
