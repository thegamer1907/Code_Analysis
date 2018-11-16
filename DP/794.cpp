#include<iostream> 
#include<climits> 
using namespace std; 
  
int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
/*Driver program to test maxSubArraySum*/
int main() 
{ 
    int n;
	cin >> n;
	int a[105];
	int b[105];
	int i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			b[i]=-1;
		}
		else
			b[i]=1;
	}
   
    int max_sum = maxSubArraySum(b, n);
	int c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			c++;
		}
	 } 
    cout << max_sum + c; 
    return 0; 
} 