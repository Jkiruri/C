#include <iostream>


int main ()
{
    int temp;
    printf("Enter temperature\n");
    scanf("%d", &temp);
    if (temp > 18)
    {
        printf("Today is warm\n");
    }
    else{
        printf("it's cold\n");
    }
    return 0;
    
}