#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return r;
}

int main()
{
	long n(0); scanf("%ld", &n);
    long * array = new long[n];

    for(int k = 0; k < n; k++){scanf("%ld", array + k);}
    std::sort(array, array + n);

    long index(n - 1);
    for(long p = n / 2 - 1; p >= 0; p--){
        if(2 * array[p] <= array[index]){--index;}
    }

    delete[] array;

    printf("%ld\n", index + 1);

    return 0;
	
}