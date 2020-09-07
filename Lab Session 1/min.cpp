#include<stdio.h>
main()
{
	int i,j,n,arr[100];//array can store max 100 values 
	int min = arr[100];
	printf("Enter the n number in array\n");// array length
	scanf("%d",&n);
	printf("enter value of array\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	min=arr[0];
	for(j=0;j<n;j++)
	{
			if(arr[j] < min)
			{
				min = arr[j];
			}
	}
	printf("minimum value: %d",min);	 // min value
	return 0;
}
