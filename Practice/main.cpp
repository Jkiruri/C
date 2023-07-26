#include <iostream>
int x;

int main(){
    printf("Please input the number\n");
    scanf("%d", &x);
  
    if(x == 0){
        printf("zero");
    }
    else if (x > 0)
    {
        
        printf("Positive number");
    }else{
        printf("negative number");
    }
    return 0;

}
