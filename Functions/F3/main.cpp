#include <iostream>
int max_num(int i,int j)
{
    if (i>j)
    {
        return i;
    }else
    {
        return j;
    }
    
}
int main()
{
    int a , b;
    a=50;
    b=70;
    int c = max_num(a,b);
    printf("The maximum number is %d",c);
    return 0;
}