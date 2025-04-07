#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void password(int length)
{
char result[length];
char word[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$^&*()";
srand(time(NULL));
if(length==8){
for (int  i = 1; i <=8; i++)
{
    result[i]=word[rand() % 35];
    printf("%C", result[i]);
   
   
}
}
if(length==12){for (int  i = 1; i <=12; i++)
{
    result[i]=word[rand() % 35];
    printf("%C", result[i]);
   
   
}}
if(length==16){for (int  i = 1; i <=16; i++)
{
    result[i]=word[rand() % 35];
    printf("%C", result[i]);
   
   
}}
}
int main(){
    printf("random password generator.........\n");
    printf("\n");
    int passlength;
    printf("enter length of password....  \n");
    scanf("%d",&passlength);
    printf("\n");
    password(passlength);
   printf("\n");


}