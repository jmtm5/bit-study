#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int binary_search(int arr[],int k,int sz)//����֮ǰ����������ֱ�Ӹ���ճ��������һ�������ԣ���������
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
  }//֮ǰ��������
		  return -1;

}
int main()
{

     int arr[]={1,2,3,4,5,6,7,8,9,10};
	 int k=5;//����һ���Ƕ�����ʹ��֮ǰ�����������ﲻ�ܷ���sz���棬��ΪszҪ�õ�
	int sz=sizeof(arr)/sizeof(arr[0]);//�����һ��sizeof(arr[])����д������
	int ret=binary_search(arr,k,sz);
	
	if(-1==ret)
	{
	printf("�Ҳ���");
	}
	else
	{
	printf("�ҵ��ˣ��±��ǣ�%d",ret);//���ﲻ֪��������ˣ���������һ��ͽ����
	}
	return 0;
}
