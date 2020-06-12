#include<stdio.h>
#include<stdlib.h>

int main(){

	int arr[100], n, min, max;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	printf("Enter the terms:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("Element %d:\n",i+1);
		scanf("%d",arr+i);
	}
	min= *arr;
	max= *arr;
	for (int i = 1; i < n; ++i)
	{
		if (*(arr+i)<min){

			min = *(arr+i);
		}
		else if(*(arr+i)>max){

			max = *(arr+i);
		}
	}
	printf("Max= %d and Min= %d\n", max, min);
}
