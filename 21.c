#include <stdio.h>
int main(int argc,char* argv[])
{
    int i=100;
    int* p=&i;
    printf("%d,%x,%x,%x\n",i,(unsigned int)(&i),(unsigned int)p,(unsigned int)&p);
    return 0;
}
