#include <stdio.h>
int main()
{
    char c=0;
    short s=0;
    int i=0;
    printf("%d,%d\n",(int)sizeof(char),(int)sizeof(c));
    printf("%d,%d\n",(int)sizeof(short),(int)sizeof(s));
    printf("%d,%d\n",(int)sizeof(int),(int)sizeof(i));
    return 0;

}
