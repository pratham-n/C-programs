#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	temp= *a;
	*a= *b;
	*b= temp;
}

int *reverse_array(int *array[], int array_size)
{
	int *p1= array;
	int *p2= array + array_size-1;
	while(p1<p2)
	{
		swap(p1, p2);
		p1++;
		p2--;
	}
	return p2;
}

int main(){

	int arr[100], n, min, max, *num;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	printf("Enter the terms:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("Element %d:\n",i+1);
		scanf("%d",arr+i);
	}
	num= reverse_array(arr, n);
	printf("The Reverse array is:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\n", *(num+i));
	}
}
