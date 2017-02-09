#define build1
#ifdef build1
#include <stdio.h>
int main()
{
    int i=3;
    int x=(++i)+(++i)+(++i);
    printf("x=%d\n",x);
    return 0;
}
#endif
