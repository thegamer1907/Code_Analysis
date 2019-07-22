#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int m,k,ans=0,j=0,a=0,d;
    ll n ;
    cin>>n>>m>>k;
    int arr[m];
    for (int i=0;i<m;++i)
        cin>>arr[i];

    while (j<m){
        d= (arr[j]-a-1)/k+1;
        while(arr[j]-a<=k*d&&j<m)
            j++;
        a=j;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}