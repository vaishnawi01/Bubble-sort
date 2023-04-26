
#include<stdio.h>
void Bubblesort(int [],int);

int main()
{
	int arr[5]={32,5,7,56,78};
	printf("the sorted list is:\n");
    Bubblesort(arr,5);
    return 0;

}
void Bubblesort(int arr[],int n)
{
	int pass=n-1;
	int comparisons=n-1;
	int i,j,k,temp;
	for(i=0;i<=pass;i++)
	{
		for(j=0;j<=comparisons-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for (k=0;k<n;k++)
	{
		printf("%d ",arr[k]);
	}
}
