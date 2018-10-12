#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>
#define pi 3.14159265359

int j;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int binary(int arr[], int arr1[], int k)
{
	int i=0,mid;
	while(i <= j)
	{
		mid = (i+j)/2;
		if(arr[mid] <= k)
		{
			i = mid+1;
		}	
		else
		{
			j = mid-1;
		}	
	}	
	i--;
	while(i >= 0)
	{
		if(arr1[i] == 1)
		{
			arr1[i] = 0;
			j = i-1;
			return 1;
		}	
		i--;
	}	
	
	return 0;
}

int main() 
{
	int n,i,s=0;
	scanf("%d",&n);
	j = n-1;
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		arr1[i] = 1;
	}	
	mergeSort(arr, 0, n-1);
	for(i=n-1;i>=(n+1)/2;i--)
	{
		if(binary(arr,arr1,arr[i]/2))
		{
			s--;
		}	
	}	
	printf("%d\n",n+s);



    return 0;
}