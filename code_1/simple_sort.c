#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,temp;
    int values[5];
    printf("enter 3 integes: ");
    for (int i = 0; i < 3; i++)
    {
       scanf("%d\n",&values[i]);
    //    printf("%d\n",values[i]);

    

    }
    a=values[0];
    b=values[1];
    c=values[2];

  if(a>b){
    temp=a;
    a=b;
    b=temp;
  }
  if(b>c){
    temp=b;
    b=c;
    c=temp;
  }
  if(a>b){
    temp=b;
    b=a;
    a=temp;
  }
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);

}