#include <stdio.h>
int main(int argc,char** argv[])
{
    int a[5]={1,2};
    int b[]={1,2};
    printf("%d %d\n",sizeof(a),sizeof(a)/sizeof(*a));
    printf("%d %d\n",sizeof(b),sizeof(b)/sizeof(*b));
    int i=0;
    for(i=0;i<5;i++)
    {
    	printf("%d\n",a[i]);    
    }
}
