/*input
2
*/


#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define ld long double
#define llu long long unsigned
#define sc(t,x) static_cast<t>(x)
#define ar(t) vector < t >
#define pii pair < int, int >
#define pll pair < LL, LL >
#define pil pair < int, LL >
#define pli pair < LL, int >
#define mp make_pair
#define pb(a) push_back(a)
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define lp(loop,start,end) for ( int loop = start; loop < end; ++loop )
#define lpd(loop,start,end) for ( int loop = start; loop > end; --loop )
#define lpi(loop,start,end) for ( int loop = start; loop <= end; ++loop )
#define lpdi(loop,start,end) for ( int loop = start; loop >= end; --loop )
#define qmax(a,b) (((a)>(b))?(a):(b))
#define qmin(a,b) (((a)<(b))?(a):(b))
#define qabs(a) (((a)>=0)?(a):(-(a)))
#define mid(l,r) (((l)+(r))/2)
#define vi vector<int>



int cnt(ll k)
{
    int ans = 0;
    while(k){
        ans+=k%10;
        k/=10;
    }
    return ans;
}



int main() {
    ios_base::sync_with_stdio(0);
    int k;
    cin>>k;
    ll ans = 19;
    while(k){
        if(cnt(ans) == 10) k--;
        ans++;
    }
    cout<<ans-1;
    return 0;
}

