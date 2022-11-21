#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int binary_search(int arr[],int k,int sz)//这里之前用中文输入直接复制粘贴过来，一定不可以！！！！！
{
 int left=0;
 int  right=sz-1;
  while(left<=right)
{
   int mid=(left+right)/2;
   if(arr[mid]>k)
      {
        right=mid-1;
       }
          else if(arr[mid]<k)
           {
             left=mid-1;
           }
              else
               {
                 return mid;
     
		       }
  }//之前少括号了
		  return -1;

}
int main()
{

     int arr[]={1,2,3,4,5,6,7,8,9,10};
	 int k=5;//函数一定是定义在使用之前！！！！这里不能放在sz下面，因为sz要用到
	int sz=sizeof(arr)/sizeof(arr[0]);//这里第一个sizeof(arr[])曾经写成这样
	int ret=binary_search(arr,k,sz);
	
	if(-1==ret)
	{
	printf("找不到");
	}
	else
	{
	printf("找到了，下标是：%d",ret);//这里不知道哪里错了，重新输入一遍就解决了
	}
	return 0;
}
