#include <iostream>
int main ()
{
    int i,j,a;
    printf("Enter a Value\n");
    scanf("%d", &a);
    for (i=0; i<=a; i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}