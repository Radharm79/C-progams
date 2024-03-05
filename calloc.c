// Calloc ;syntax: void *calloc(size_t nmemb,size_t size);

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0,*p;
	printf("\n Howmany elements?");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed!");
		exit(0);
	}
	printf("\nEnter %d no. of elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
		sum = sum + *(p+i);
	}
	printf("\nElements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
		printf("\n sum=%d",sum);
	}
}
