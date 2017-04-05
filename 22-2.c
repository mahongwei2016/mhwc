#include <stdio.h>
//another file
//char* p="hello world\n"
extern char p[];
int main()
{
//    printf("%s\n",p);
    printf("%s\n",(char *)(*(unsigned int *)p));  
    return 0;
}
