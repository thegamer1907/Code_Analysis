#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>n>>t;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long sum = 0,number = 0,pointer = 0,maxima = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        number++;
        if(sum>t)
        {
            sum-=arr[i];
            i--;
            number-=2;
            sum-=arr[pointer];
            pointer++;
        }

        maxima = max(maxima,number);
    }
    cout<<maxima;
    return 0;

}
