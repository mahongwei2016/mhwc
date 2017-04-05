#include <stdio.h>
int main()
{
    int a[5]={1,2};
    int b[]={1,2};
    int i=0;
    printf("%0x %0x\n",a,&a);
    printf("%0x,%0x\n",b,&b);
    a=b;
    return 0;
}
