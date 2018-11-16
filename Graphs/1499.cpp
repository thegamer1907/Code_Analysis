#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,m;
    cin>>n>>m;
    int arr[n];
    if(m>=n)
        {cout<<"YES";
        exit(0);}
    for(i=1;i<n-1;i++)
        cin>>arr[i];
    for(i=1;i<n;i+=arr[i])
    {
        if(i==m)
            {cout<<"YES";
            exit(0);}
    }
    cout<<"NO";
}
