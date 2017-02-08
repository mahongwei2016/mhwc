#define build1
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
