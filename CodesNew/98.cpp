#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int l;cin>>l;
    long long int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double maxi=-1;

    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]-arr[i-1]>maxi){maxi=(double)(arr[i]-arr[i-1]);}
    }
    double d=maxi/2;
    d=max(d,max((double)arr[0],(double)(l-arr[n-1])));
    cout << fixed << showpoint;
    cout << setprecision(10);
    cout << d << endl;
    return 0;
}
