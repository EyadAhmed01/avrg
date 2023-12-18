#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,sum=0;
    float avg;
    printf("please enter row and column\n");
    scanf("%d %d",&n,&m);
    int x[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enter x[%d][%d]: ",i,j);
            scanf("%d",&x[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=x[i][j];
        }
        printf("sum of elements of %d row is %d \n",i,sum);
        sum=0;
    }
 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=x[i][j];
        }
    }
avg=(float)sum/(n*m);
printf("average of all elements = %0.2f",avg);
}
