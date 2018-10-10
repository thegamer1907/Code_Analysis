#include <bits/stdc++.h>
using namespace std;
#define F(i,s,n) for(ll i=s;i<n;i++)
#define EB emplace_back
#define G(x,i) get<i>(x)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define MXN 100005
using namespace std;

int n,S,as[MXN];
ll cs[MXN];

ll sol(int k){
    ll tot=0;
    F(i,0,n)cs[i]=as[i]+(i+1)*k;
    sort(cs,cs+n);
    F(i,0,k)tot+=cs[i];
    return tot;
}

int main(){
    cin>>n>>S;
    F(i,0,n)cin>>as[i];
    int lo=0,hi=n;
    while(lo!=hi){
        int mid=(lo+hi)/2;
        if(S>=sol(mid)){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    for(lo=min(lo+5,n);S<sol(lo);lo--);
    cout<<lo<<" "<<sol(lo);
}
