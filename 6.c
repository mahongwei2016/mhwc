#ifdef build1
#include <stdio.h>
#include <malloc.h>
typedef struct _soft_array
{
    int len;
    int array[];
}softarray;
softarray* create_soft_array(int size)
{
    softarray* ret=NULL;
    if(size>0)
    {
         ret=(softarray*)malloc(sizeof(*ret)+sizeof(*(ret->array))*size);
         ret->len=size;  
    }
    return ret;
} 
void fac(softarray* sa)
{
    int i=0;
    if(NULL!=sa)
    {
        if(1==sa->len)
	    sa->array[0]=1;
        else if(2==sa->len)
	    {
             sa->array[0]=1;
             sa->array[1]=1;
            }
        else 
	{
	 sa->array[0]=1;
         sa->array[1]=1;
         for(i=2;i<sa->len;i++)
	    {
	     sa->array[i]=sa->array[i-1]+sa->array[i-2];
	    }
	}
    }
}
void delete_soft_array(softarray* sa)
{
    free(sa);
}
int main()
{
    int i=0;
    softarray* sa= create_soft_array(10);
    fac(sa);
    for(i=0;i<sa->len;i++)
	{
	 printf("%d\n",sa->array[i]);
	}
    delete_soft_array(sa);
    return 0;
}
#endif

#ifdef build2
#include <stdio.h>
#include <malloc.h>
union C
{
    int i;
    char c;
};
int main()
{
    union C cc;
    cc.i=1;
    printf("%d\n",cc.c);
    return 0;
}
#endif
#ifdef build3
#include <stdio.h>
#include <malloc.h>
struct _null
{
};
int main()
{
	struct _null n1;
	struct _null n2;
	printf("%d\n",sizeof(struct _null));
	printf("%d %0x\n",sizeof(n1),&n1);
	printf("%d %0x\n",sizeof(n2),&n2);
	return 0;
}
#endif
