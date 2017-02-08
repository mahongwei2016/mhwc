#define build1
#ifdef build1
#include <stdio.h>
int main()
{
//    char* p1=1;
//    char* p2='1';
    char* p3="1";
    printf("%s,%s,%x",p3,p3,p3);
    printf("\n");
//    printf('\n');
    return 0;
}

#endif

