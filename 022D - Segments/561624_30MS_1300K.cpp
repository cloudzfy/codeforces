#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
	if(((int *)a)[0]==((int *)b)[0])
		return ((int *)a)[1]-((int *)b)[1];
	return ((int *)a)[0]-((int *)b)[0];
}

int main()
{
	int k=0,n,i,x[1000][2],start,end,queue[1000],tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x[i][0],&x[i][1]);
		if(x[i][0]>x[i][1])
		{
			tmp=x[i][0];
			x[i][0]=x[i][1];
			x[i][1]=tmp;
		}
	}
	qsort(x,n,sizeof(x[0][0])*2,cmp);
	start=-10001;
	end=-10001;
	for(i=0;i<n;i++)
	{
		if(end<x[i][0])
		{
			queue[k++]=end;
			start=x[i][0];
			end=x[i][1];
		}
		else
		{
			if(start<x[i][0])
				start=x[i][0];
			if(end>x[i][1])
				end=x[i][1];
		}
	}
	queue[k++]=end;
	printf("%d\n%d",k-1,queue[1]);
	for(i=2;i<k;i++)
	{
		printf(" %d",queue[i]);
	}
	printf("\n");
	return 0;
}
