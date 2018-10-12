#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
#include<vector>
#include<cmath>
#include<map>
#include<queue>
#include<algorithm>
#include<sstream>
using namespace std;
typedef long long ll;
ll n;
bool check(ll i){
    ll ans=0; ll t=n;
    while(t){
        ans+=min(i,t); t-=min(i,t); t-=t/10;
        if(2*ans>=n){
            return true;
        }
    }
    return false;
}
int main(){
    scanf("%lld",&n); bool ok=false;
    ll lb=0, ub=n;
    while(ub-lb>1){
        ll mid=(lb+ub)>>1;
        if(check(mid)) ub=mid;
        else lb=mid;
    }
    printf("%lld\n",ub);
    return 0;
}
