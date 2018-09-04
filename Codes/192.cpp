#include <iostream>

using namespace std;

int main()
{
    long long n,k,x,y=0,z;
    cin>>n;
    long long arr[n];
    for (long long i=0 ; i<n ; i++)
    {
        cin>>x;
        y+=x;
        arr[i]=y;
    }
    cin>>k;
    long long arr2[k];
    for(long long i=0 ; i<k ; i++)
    {
        cin>>arr2[i];
        long long lo=0 , hi =n-1 , mid ;
        while (lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if (arr2[i]<=arr[mid])
                hi=mid;
            else
                lo = mid+1;

        }
        cout<<lo+1<<endl;

    }
    return 0;
}