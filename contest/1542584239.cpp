#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define pll pair<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define vpll vector<pll>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define ln length()
#define M 1000000007
ll n,k,ct[16],how[16];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>n>>k;
    rep(i,1,n){
        vll tem;tem.resize(k);
        ll mask=0;
        rep(i,0,k-1){
            cin>>tem[i];
            if(tem[i]) mask+=(1<<i);
        }
        ct[mask]++;
    }

    rep(mask,1,(1<<(1<<k))-1){
        ll pos=1,tot=0;
        rep(j,0,k-1) how[j]=0;
        rep(i,0,(1<<k)-1) if(mask&(1<<i)){
            if(ct[i] == 0){
                pos=0;
                break;
            }
            tot++;
            rep(j,0,k-1) if(i&(1<<j)) how[j]++;
        }
        if(!pos) continue;
        rep(i,0,k-1) if(how[i]>tot/2) pos=0;

        if(!pos) continue;
        //cout<<mask<<endl;
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
}
