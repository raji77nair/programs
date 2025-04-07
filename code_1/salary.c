#include<stdio.h>

int main()
{
    float salary,temp,new_salary;

    printf("enter the salary:  ");
    scanf("%f",&salary);

    if(salary<=400)
    {
        temp=salary*15/100;
        new_salary=temp+salary;

        printf("%f",new_salary);
    }
    else if(salary>400 && salary<=800)
    {
        temp=salary*12/100;
        new_salary=temp+salary;

        printf("%f",new_salary);
    }
     else if(salary>800 && salary<=1200)
    {
        temp=salary*10/100;
        new_salary=temp+salary;

        printf("%f",new_salary);
    }
     else if(salary>1200 && salary<=20000)
    {
        temp=salary*7/100;
        new_salary=temp+salary;

        printf("%f",new_salary);
    }
     else if(salary<=20000)
    {
        temp=salary*4/100;
        new_salary=temp+salary;

        printf("%f",new_salary);
    }
    else{
        printf("  ");
    }
    return 0;
}