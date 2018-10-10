/*
    algo:
    idea:

*/
#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define MX 2022
#define mod 1000000007


ll calc(ll n,ll m,  ll mid) {
    ll ret=0;
    for(int i=1; i<=n; i++)
        ret += min(m, ((mid)/i));
//    cout<<"n "<<n<<" mid "<<mid<<" ret "<<ret<<endl;
    return ret;
}

ll solve() {

    ll n, m, k;
    cin>>n>>m>>k;
    ll l=1, h = n*m;
    while(l<=h) {
        ll mid = (l+h)>>1;
        if(calc(n,m, mid)<k)
            l = mid+1;
        else
            h= mid-1;
    }
//    if(calc(n,m, l)>=k)
//        l--;
    return l;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//freopen("output.txt", "w", stdout);
//    memset(dp, -1, sizeof dp);


    cout<<solve()<<endl;

    return 0;
}
