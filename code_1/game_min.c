#include<stdio.h>
int main()
{
    int strt_time,end_time,strt_min,end_min,hour,h,m;

    printf("enter start time:");
    scanf("%d",&strt_time);
    printf("enter start min:");
    scanf("%d",&strt_min);
    printf("enter end time:");
    scanf("%d",&end_time);
    printf("enter end min:");
    scanf("%d",&end_min);
if(strt_time<end_time)
{
h=end_time-strt_time;
hour=h-1;
}
else
{
    h=24-strt_time+end_time;

hour=h-1;
}

m=60-strt_min+end_min;

if(m>=60){
    hour+=1;
    m-=60;
}


printf("%d:%d",hour,m);

    return 0;

}