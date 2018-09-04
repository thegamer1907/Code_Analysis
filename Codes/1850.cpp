#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll ;
const int N=2e5+5;
const double pi=acos(-1.0);
ll n,m,k;
bool check(ll x){
    ll c=0;
    for(int i=1;i<=n;i++){
        c+=min(x/i, m);
    }
    return c<k;
}
int main(){
    cin>>n>>m>>k;
    ll l=1,r=n*m;
    ll ans;
    while(r>=l){
        ll mid=l+(r-l)/2;
        if(check(mid)){
           l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<l<<endl;
    
    return 0;
}