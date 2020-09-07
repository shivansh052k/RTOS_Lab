#include<stdio.h>
main()
{
	int i,a,j,n,arr[10];
	int sum=0;
	float median;
	printf("Enter the value of array"); // user input of array length
	scanf("%d",&n);
	printf("array length\n %d",n);
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
	 if(n%2==0)
	 {
                median=(arr[(n-1)/2]+arr[n/2])/2.0;
    	}
	else
                median=arr[n/2];
	
		printf("Median of array: %f",median); //median of array
	return 0;
}
