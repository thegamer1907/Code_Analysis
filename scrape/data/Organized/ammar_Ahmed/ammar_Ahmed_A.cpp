#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int m,j=0,a=0;
    ll n,d,k,ans=0 ;
    cin>>n>>m>>k;
    ll arr[m];
    for (int i=0;i<m;++i)
        cin>>arr[i];

    while (j<m){
        d= (arr[j]-a-1)/k+1;
        while(j<m&&arr[j]-a<=k*d)
            j++;
        a=j;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}