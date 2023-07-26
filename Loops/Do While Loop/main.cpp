#include <iostream>
int main ()
{
    int num;
    printf("Enter the number of times to be repeated\n");
    scanf("%d", &num );
    do
    {
        printf("my name is Petro\n");
        num--; 
    } while (num >= 1);
    
   
    return 0;
}