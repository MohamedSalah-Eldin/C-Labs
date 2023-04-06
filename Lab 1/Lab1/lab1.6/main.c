#include <stdio.h>
#include <stdlib.h>

void main()
{
  char op;
    double x,y,sum,sub,multi;
    float divid;
     printf("Enter your op\n");
        scanf("%c",&op);
    printf("Enter two number\n");
    scanf("%d",&x);
    scanf("%d",&y);


    if(op=='+')
    {sum=x+y;
            printf("sum = %d\n",sum);
    } else if (op=='-')
    {sub=x-y;
            printf("sub = %d\n",sub);
    }else if (op=='*')
    {multi=x*y;
            printf("multi = %d\n",multi);
    }else if (op=='/')
    {if (y==0)
            printf("can't divide 0\n");
else
   {
       divid=x/y;
        printf("divid = %f\n",divid);}
    }else
    printf("invalid op\n");
}

