#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll n,t;
    cin >> n >> t;
    ll arr[n];
    ll max=0,j=0,sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        while(sum>t)
        {
            sum-=arr[j];
            j++;
        }
        if(i-j+1>max)
        {
            max=i-j+1;
        }
    }
    cout<<max;
    return 0;
}