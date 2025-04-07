#include <stdio.h>

int main()
{
    int r=0, c=0, s=0, num, total, temp;
    scanf("%d", &num);
    char ch;

    for (int i = 1; i <= num; i++)
    {
        scanf("%d %c", &temp, &ch);
        if (ch == 'C')
        {
            c += temp;
            
        }
        if (ch == 'R')
        {
            r += temp;
        }
        if (ch == 'S')
        {
            s += temp;
        }
    }
    total=c+r+s;
    printf("total:%d\n",total);
    printf("total:%d\n",c);
    printf("total:%d\n",r);
    printf("total:%d\n",s);

    printf("percentage of c:%f\n",c*100/total);
     printf("percentage of r:%f\n",r*100/total);
     printf("percentage of s:%f\n",s*100/total);
}

