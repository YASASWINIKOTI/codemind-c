#include<stdio.h>
int search(int *arr,int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,i,key,res;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	res=search(arr,n,key);
	 if(res!=-1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}