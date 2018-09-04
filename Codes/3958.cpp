#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FOR(i,f,t) for(int i=f; i<(int)t; i++)
#define FORR(i,f,t) for(int i=f; i>(int)t; i--)
#define ms(obj, val) memset(obj, val, sizeof(obj))
#define ms2(obj, val, sz) memset(obj, val, sizeof(obj[0])*sz)
#define pb push_back
#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%lld",&x)
#define rii(x,y) ri(x), ri(y)

typedef vector<int> vi;
typedef long long ll;

int n[3], cnt[3], N;
ll p[3], r;
string s;


int mp[200];

bool can(ll x){
    ll need=0;
    FOR(i,0,3){
        need += max(0ll,(x*cnt[i] - n[i]))*p[i]; 
    }
    return need<=r;
}


int main(){
    mp[(int)'B']=0;
    mp[(int)'S']=1;
    mp[(int)'C']=2;
    cin >> s;
    N = s.length();
    FOR(i,0,3) cin>>n[i];
    FOR(i,0,3) cin>>p[i];
    cin >> r;
    FOR(i,0,N) cnt[mp[(int)s[i]]]++;
    ll lo = 0, hi = r+200;
    while(lo != hi){
        ll m = (hi+lo+1)/2;
        if(can(m)) lo = m;
        else hi=m-1;
    }
    cout<<lo<<endl;
}
