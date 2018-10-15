#include<bits/stdc++.h>
using namespace std;
#define MAX 500005
int n , arr[MAX];



bool checker(int mid)
{
    for (int i = 0 ; i < mid;i++)
    {
        if (2*arr[i] > arr[n-mid+i])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    scanf("%d",&n);
    
    for (int i = 0 ; i < n ; i++)
    {
     scanf("%d",&arr[i]);   
    }
    sort(arr,arr+n);
    
    
    int l  = 0,r = n/2,mid;
    
    while ( l < r)
    {
        
        mid = (l+r)/2 + 1;
       
        if (checker(mid))
        {
            
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
        
    }
    
    printf("%d ",n - l);
    return 0;
}