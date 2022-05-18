#include <stdio.h>
#define S 10

int max(int a[],int m)
{
	int sum,maxsum;
	int i;
	sum=maxsum=0;
	for(i=0;i<m;i++)
	{
		sum+=a[i];
		if(sum>maxsum)
		{
			maxsum=sum;
			}else if(sum<=0)
			{
				sum=0;
			}
	}
	return maxsum;
}

void main()
{
	int i,a[S],m,n;
	printf("Please scanf the num of array\n");
	scanf("%d",&n);
	printf("Please scanf the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[i]=m;
	}
	a[i]='\0';
	n=max(a,S);
	printf("Maxsum=%d\n",n);
}