#include <iostream>
#include <vector>
using namespace std;
#define fore(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
typedef long long ll;
vector<ll>v;
ll n,m,k;

int main(){
    cin>>n>>m>>k;
    fore(i,1,m){ll x;scanf("%lld",&x);v.push_back(x);}
    ll now=0,ans=0;
    while(v.size()){
        ll str=(v[0]-now-1)/k;
        int i=0;
        while(i<v.size() && (v[i]-now-1)/k==str) i++;
        fore(j,0,i-1) v.erase(v.begin());
        ans++;
        now+=i;
    }
    cout<<ans;
    return 0;
}