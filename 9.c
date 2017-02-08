#define build1
#ifdef build1
#include <stdio.h>
#define swap(a,b) \
{\
    int temp = a; \
    a=b;          \
    b=temp;       \
}
int main(int argc,char *argv[])
{
    int a=1;
    int b=2;
    swap(a,b)
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
#endif
