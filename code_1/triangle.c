#include<stdio.h>
#include<conio.h>

int main(){
    double a,b,c,temp,g,h,i;
    double values[5];
    printf("enter 3 integes: ");
    for (int i = 0; i < 3; i++)
    {
       scanf("%lf\n",&values[i]);
    //    printf("%d\n",values[i]);

    

    }
    a=values[0];
    b=values[1];
    c=values[2];

  if(a<b){
    temp=a;
    a=b;
    b=temp;
  }
  if(b<c){
    temp=b;
    b=c;
    c=temp;
  }
  if(a<b){
    temp=b;
    b=a;
    a=temp;
  }
  printf("%lf\n",a);
  printf("%lf\n",b);
  printf("%lf\n",c);
a*a=g;
b*b=h;
c*c=i;

if(a>=b+c){
    printf("NAO FORMA TRIANGULO");

}
if(g=h+i){
    printf("TRIANGULO RETANGULO");
    }
if(g>h+i){
    printf("TRIANGULO OBTUSANGULO");
}
if(g<h+i){
    printf("TRIANGULO ACTUANGULO");
}
if(a==b==c){
    printf("TRIANGULO EQUILATERO");
}
if(a!=b!=c){
    printf("TRIABGULO ISOSCELES");
}
}