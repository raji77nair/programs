#include<stdio.h>
#include<string.h>
int is palindrome(char str[])

{
    int start=0;
    int end=strlen(str)-1;

    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return 0;
        }
        start ++;
        end --;
    }
    return 1;
    }
{
    int main()
    {
        char str[100];
        printf("enter a string: ");
        scanf("%s",&str);
        if(is palindrome(str))
        {
            printf("%s is an palindrome.\n",str);
        }
        else{
             printf("%s is not palindrome.\n",str);
        }
    }
}