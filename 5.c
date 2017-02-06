#include <stdio.h>
#include <malloc.h>
int main()
{
    const int cc=1;
    int* p=&cc;
    printf("%d\n",cc);
    *p=3;
    printf("%d\n",cc);
    return 0;
}

