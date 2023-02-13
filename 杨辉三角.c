#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10][10]={ 0 };
	int i=0;
	int j=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		if(j==0)
		     {
		        arr[i][j]=1;//第一列全为1
		     }
		if(j==i)
		  {
		   arr[i][j]=1;//斜线全为1
		  }
		if(i>=2 && j>=1)
		{
		arr[i][j]=arr[i-1][j]+arr[i-1][j-1];//除了第一列，对角线的数值进行计算
		}
		}
	}


		//打印
for(i=0;i<10;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("%d ",arr[i][j]);      
	}
printf("\n");
	}
return 0;
}