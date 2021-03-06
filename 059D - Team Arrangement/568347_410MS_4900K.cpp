#include <stdio.h>
#include <stdlib.h>
int rank[300000],team[100000][3],queue[300000];
int cmp(const void *a,const void *b)
{
    return *((int*)a)-*((int*)b);
}
int main()
{
    int n,i,j,k,space,mark,x;
    scanf("%d",&n);
    for(i=0;i<3*n;i++)
    {
        scanf("%d",&rank[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&team[i][0],&team[i][1],&team[i][2]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(team[i][0]==k||team[i][1]==k||team[i][2]==k)
        {
            x=i;
            break;
        }
    }
    for(j=0;j<3*n;j++)
    {
        if(rank[j]==team[x][0]||rank[j]==team[x][1]||rank[j]==team[x][2])
        {
            break;
        }
    }
    if(rank[j]!=k)
    {
        space=0;
        for(i=1;i<=3*n;i++)
        {
            if(i==k)continue;
            if(!space) space=1;
            else printf(" ");
            printf("%d",i);
        }
        printf("\n");
    }
    else
    {
        mark=-1;
        for(i=0;i<3*n;i++)
        {
            queue[i]=team[i/3][i%3];
            if(queue[i]==k)
            {
                mark=i;
            }
        }
        qsort(queue,mark-mark%3+3,sizeof(queue[0]),cmp);
        for(i=mark+2;i>=0;i--)
        {
            if(queue[i]==team[x][0]||queue[i]==team[x][1]||queue[i]==team[x][2])
            {
                if(queue[i]==k) continue;
                mark=i;
                break;
            }
        }
        qsort(queue+mark+1,3*n-mark-1,sizeof(queue[0]),cmp);
        space=0;
        for(i=0;i<3*n;i++)
        {
            if(queue[i]==k)continue;
            if(!space) space=1;
            else printf(" ");
            printf("%d",queue[i]);
        }
        printf("\n");
    }
    return 0;
}
