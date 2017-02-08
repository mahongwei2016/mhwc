#define build1
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
