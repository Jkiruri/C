#include <iostream>

int temp;

int main()
{
    printf("Enter temperature\n");
    scanf("%d", &temp);
    
    if (temp >37)
    {
        
        if (temp == 40)
        {
        printf("It is torelable!!\n");
        }
        printf("It is not habitable!!\n");
    }
 
    else
    {
        printf("It is habitable\n");
    }
    
    return 0;
}
