#define build3
#ifdef build1
#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    if(++i > 0 || ++j>0)
    {
        printf("i=%d\n",i);
        printf("j=%d\n",j);
    }
    return 0;
}
#endif
#ifdef build2
#include <stdio.h>
int g=0;
int f()
{
    return g++;
}
int main()
{
    if( f() && f())
    {
    printf("g1:%d\n",g);
    }
    printf("g2:%d\n",g);
    printf("%d\n",!0);
    printf("%d\n",!1);
    printf("%d\n",!100);
    return 0;
}
#endif
#ifdef build3
#include <stdio.h>
int main()
{
    int a=1;
    int b=2;
    int c=0;
    c=a<b?a:b;
    *(a<b?&a:&b)=3;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    return 0;
}
#endif
