#include<stdio.h>

int main()
{
    int strt_time,end_time,day,temp,temp1,temp2;

    printf("enter the start time: ");
    scanf("%d",&strt_time);
     printf("enter the end time: ");
    scanf("%d",&end_time);

day=24;
if(strt_time>end_time){
temp=day-strt_time;
temp1=temp+end_time;
printf("%d",temp1);
}
else if(strt_time==end_time){
temp=day-strt_time;
temp1=temp+end_time;
printf("%d",temp1);
}
else{
temp=day-strt_time;
temp1=temp+end_time;
temp2=temp1-day;

printf("%d",temp2);
}

int a,b,c,d;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);

if(a<b){
    printf("%d",(b-a));
}
else{
    printf("%d",(24-a+b));
}


printf("%d",60-2+3);
return 0;
}