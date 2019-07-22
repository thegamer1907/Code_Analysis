#include <bits/stdc++.h>
typedef long long ll;
ll n,m,k;
using namespace std;
vector<ll>ar;
int main()
{ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        ll el;cin>>el;
        ar.push_back(el);
    }
    ll rem=0;
    ll pos=0;
    int cnt=0;
    while(pos<m){
        auto mn=(ar[pos]-rem)/k+1;
        auto nx=upper_bound(ar.begin(),ar.end(),(mn)*(k)-rem)-ar.begin();
        /*cout<<"CURRENT"<<ar[pos]<<'\n';
        cout<<pos<<' '<<mn<<' '<<nx<<'\n';
        cout<<rem<<'\n';*/
        rem+=nx-pos;
        if(nx!=pos)
        pos=nx;
        else pos++;
        cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}