#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
}e1;

int main()
{
    e1.id=101;
   strcpy(e1.name,"raji");
    printf("name:%d\n",e1.id);
    printf("n %s",e1.name);
return 0;
}