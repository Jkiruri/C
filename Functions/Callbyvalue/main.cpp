#include <iostream>
int callbyvalue(int x, int y)
{
    x = x+5;
    y = y+5;
    printf("\nx=%d \ny=%d", x,y);
}
int main()
{
    int i=20; int j=30;
    printf("i=%d j=%d before function calling", i, j);
    callbyvalue(i,j);
    printf("i=%d j = %d After funtion call",i,j);
    return 0;
}