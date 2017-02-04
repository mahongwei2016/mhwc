#include <stdio.h>
typedef enum _bool
{
    FALSE=0,
    TRUE=1
}BOOL;
int main(int argc,char *argv[])
{
    BOOL b=TRUE;
    if(b==1)
	{printf("OK\n");}
    else 
	{printf("ERROR\n");}
    return 0;
}
