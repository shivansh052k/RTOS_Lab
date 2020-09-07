//sorting array
int sort(int n, int arr[100])
{
	{
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");// array length
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) //sorting 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
		return sorting; 
}

//max no in array

int max(int n, int arr[100])
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
	return max;
}


// Min no: in array

void min(int ar[100], int n)
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
	return min;
}

// Mean of array

void mean(int arr[100], int n)
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
	return mean;
}

// Median of array

void median(int arr[100], int n)
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
	return median;
}

