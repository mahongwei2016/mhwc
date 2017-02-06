#define build2

#ifdef build1
#include <stdio.h>
#include <malloc.h>
int main()
{
    const int cc=1;
    int* p=(int*)&cc;
    printf("%d\n",cc);
    *p=3;
    printf("%d\n",cc);
    return 0;
}
#endif

#ifdef build2
#include <stdio.h>
#include <malloc.h>
const int* func()
{
    static int count=0;
    count++;
    return &count;
}

int main()
{
    int i=0;
    const int* p=func();
    printf("%d\n",*p);
    return 0;
}
#endif
