#include<stdio.h>
int main()
{
    int a,b,c,count;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("enter the number: ");
    scanf("%d",&b);
    count=0;
while(count<=6)
   { 
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
     printf("\n");
count++;
   }
   return 0;
}