#include <stdio.h>
#include <time.h>
#define LOG(s) do{         \
    time_t t;              \
    struct tm* ti;         \
    time(&t);              \
    ti=localtime(&t);      \
    printf("%s[%s:%d] %s\n",asctime(ti),__FILE__,__LINE__,s);\
}while(0)
void f()
{
    LOG("enter f()");
    LOG("exit f()");
}
int main()
{
    LOG("enter main()");
    f();
    LOG("exit main()");
    return 0;
}
