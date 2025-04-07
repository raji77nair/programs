#include<stdio.h>
int main()
{
    int exp,j,c,r,s;
    
    scanf("%d",&j);

    for (int i = 0; i < j; i++)
    {
    scanf("total :%d\n",&exp);
   
   scanf("total de coelhos: %d\n",&c);
  
  scanf("total de ratos: %d\n",&r);
   
   scanf("total de sapos: %d\n",&s);
   

    exp=c+r+s;
    
     printf("total: %d cobaias",exp);    
    }
}

