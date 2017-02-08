#define build2
#ifdef build1
#include <stdio.h>
#include <malloc.h>
enum color
{
    red,
    blue,
    green
};
int main(int argc,char* argv[])
{
    printf("%d\n",red); 
    printf("%d\n",blue); 
    printf("%d\n",green); 
    return 0;
}
#endif
#ifdef build2
#include <stdio.h>
typedef int INT32;
int main()
{
    int i=0;
    int* p=&i;
    INT32* p32=&i;
    int* pc=p32;
    return 0;
}
#endif
