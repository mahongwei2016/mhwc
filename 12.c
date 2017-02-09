#define build2
#ifdef build1
#include <stdio.h>
#define swap1(a,b)\
{                 \
    int temp=a;   \
    a=b;          \
    b=temp;       \
}
#define swap2(a,b) \
{                 \
    a=a+b;        \
    b=a-b;        \
    a=a-b;        \
}
#define swap3(a,b)\
{                 \
    a=a^b;        \
    b=a^b;        \
    a=a^b;        \
}
int main()
{
    int m=10;
    int n=1;
    swap3(m,n);
    printf("m=%d,n=%d\n",m,n);
    return 0;
}
#endif
#ifdef build2
#include <stdio.h>
#define DIM(a) (sizeof(a)/sizeof(*a))
int main()
{
    int a[]={2,2,3,3,4,4,5,5,6,7,7,8,8,9,9,1,1};
    int find=0;
    int i=0;
    for(i=0;i<DIM(a);i++)
    {
      find^=a[i];
    }
    printf("find is %d\n",find);
    return 0;
}
#endif
