//Be Name Khoda :))
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MN=1e5+100 , mod=1e9+7 ;

int n,a[MN],mn=mod;

int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    mn/=n;
    for(int i=0;i<n;i++){
        a[i]-=mn*n;
    }
    int cnt=0,i=0;
    while(i<n && a[i]-cnt>0){
        cnt++;
        i++;
    }
    if(i==n){
        i=0;
        while(i<n && a[i]-cnt>0){
        cnt++;
        i++;
        }
    }
    cout<<cnt%n+1<<"\n";
}
