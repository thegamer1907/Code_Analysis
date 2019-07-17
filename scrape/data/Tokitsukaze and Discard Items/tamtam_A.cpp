#include <bits/stdc++.h>
#define F first
#define S second
typedef long long ll;
using namespace std;



int main()
{

    ll n,m,k;
    ll a[100010];
    cin >>n>>m>>k;
    for (ll i=0;i<m;i++) {
        cin >>a[i];
    }

    ll j=0;
    ll del=0;
    ll ans=0;
    for (;j<m;){

        ll cur=a[j]-1-del;
        cur/=k;
        ll cnt=0;
        while (j<m&&(a[j]-1-del)/k==cur){
            j++;
            cnt++;
        }
        ans++;
        del+=cnt;

    }
    cout <<ans<<endl;
    return 0;
}