#define build2
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
    return 0;
}
#endif
