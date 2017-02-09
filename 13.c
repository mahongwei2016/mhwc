#define build2
#ifdef build1
#include <stdio.h>
int main()
{
    int i=3;
    int x=(++i)+(++i)+(++i);
    printf("build1 x=%d\n",x);
    return 0;
}
#endif
#ifdef build2
#include <stdio.h>
int main()
{
    int i=3;
    int x=(++i,x++,i+10);
    printf("build2  x=%d\n",x);
    return 0;
}
#endif
