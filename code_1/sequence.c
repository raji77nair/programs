#include <stdio.h>

int fact(int n);
int main()
{
    int number;
    printf("enter an integer:");
    scanf("%d",&number);

    if(number<0)
    {
        printf("the factorial cannot be negative ");
    }
    else{
        printf("factorial of %d is %d ",number,fact());
    }
    return 0;
}
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=1;
    }
    return factorial;
}