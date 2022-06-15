#include<stdio.h>
void main()
{
	int i,j, sum1=0, sum2=0, n, arr[3][3],result;
	printf("Enter a no\n");
	scanf("%d",&n);
	printf(" Enter the matrix value\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		
		scanf("%d",&arr[i][j]);
}
printf(" Enter a matrix");
for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\n",arr[i][j]);
		}
		printf("\n");
		}	
			if(i==j)
			{
				sum1= sum1+arr[i][j];
			}
		}
	}
	
	j= n-1;
	for(i=0; i<n; i++)
	{
		while(j>=0)
		{
			sum2=sum2+arr[i][j];
			j--;
			break;
		}
	}
	res=sum1-sum2;
	if(res<0)
	{
		printf(" postive res=%d",-res);
	}
  else
  {
  	printf(" pos res= %d,res");
  }
  }
