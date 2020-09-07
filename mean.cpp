#include<stdio.h>
main()
{
	int i,a,j,n,arr[10];
	int sum=0;
	float mean;
	printf("Enter the value of array"); //Array length
	scanf("%d",&n);
	printf("Enter the number in array\n %d",n);
	printf("Enter the values in array\n");	
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
	for(i=0;i<n;i++)   //sorting array
		{
		for(j=i + 1;j<n;j++)
			{
			 if (arr[i] > arr[j]) 
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
			}
		}
	printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        {
		  printf("%d\n", arr[i]);
		}	
	for(j=0;j<n;j++)
	{
		sum=sum+arr[j];	// Sum of all values
	}
	printf("sum of in array: %d\n",sum); // sum number in array
	mean=sum/n;
	printf("Mean of array: %f",mean); // mean value
	return 0;
}
