#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n+5];

    for(int i=1 ; i<n ; i++)
        cin>>arr[i];

    int ans=1;

    if(m==1) return cout<<"YES"<<endl,0;
    for(int i=1 ; i<n and ans<=m ; ){
        ans+=arr[i];
        if(ans==m) return cout<<"YES"<<endl,0;
        i=ans;
    }

    cout<<"NO"<<endl;

    return 0;
}
