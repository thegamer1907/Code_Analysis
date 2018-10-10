#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int,int>
#define pll pair<ull,ull>
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fo_(i,a,b) for(int i=a;i>b;i--)
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define pb push_back
#define PI 3.14159265
#define nmax 1000100
const ll inf = std::numeric_limits<ll>::max();
using namespace std;

ll n;
ll calc(ll k,ll a){
    ll out=0;
    while (a>0){
        out += min(k,a);
        a-=k;
        a-=a/10;
    }
    return out;
}
ll bis(ll a,ll b){
    ll mid = (a+b)/2;
    if (a == b) return a;
    if (a == b-1) if (calc(a,n)*2 >= n) return a; else return b;
    if (calc(mid,n) * 2 < n){
        return bis(mid,b);
    }else{
        return bis(a,mid);
    }
}



int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    cout << bis(1,100000000000000000000);
    return 0;
}

