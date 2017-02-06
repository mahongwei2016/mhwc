#define build1

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
#include <malloc.c>
int main()
{
    
}
#endif
