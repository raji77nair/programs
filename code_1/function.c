#include<stdio.h>

void namaste();
void bonjoure();
int main()
{
char c;
    printf("enter a character: ");
    scanf("%c",&c);
    if(c=='i')
    {
        namaste();
    }
    else{
        bonjoure();
    }
    return 0;
}

void namaste()
{
    printf("namaste india\n");
    
}
void bonjoure()
{printf("bonjoure french\n");}