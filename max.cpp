#include<stdio.h>
main()
{
	int i,j,n,arr[100]; //array can store max 100 values 
	int max = arr[100];
	printf("Enter the n values in array\n");//array length
	scanf("%d",&n);
	printf("Enter the values of array\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]); //user input of values
		}
	max=arr[0];
	for(j=0;j<n;j++)
	{
			if(arr[j] > max) //maximum no: comparision
			{
				max = arr[j]; 
			}
	}
	printf("maximum: %d",max);	// max value print
	return 0;
}
