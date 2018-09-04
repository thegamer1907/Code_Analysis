#include <bits/stdc++.h>
#define ll      long long int
#define PI      acos(-1)
#define read    freopen("in.txt","r",stdin)
#define uu      first
#define vv      second
#define write   freopen("out.txt","w",stdout)
#define pii     pair<int,int>
#define INF     1e9
#define EPS		1e-8
#define MAX		1000006
#define MOD		1000000007
using namespace std;
ll n , k ,ans;
ll ara[MAX];
map<ll , ll>r;
map<ll, ll>l;
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>k;
    for( int i =0 ; i < n ; i++ ){
        cin>>ara[i];
        r[ara[i]]++;
    }

    for( int i =0 ; i < n ; i++ ){
        ll cnt1 = 0 , cnt2 = 0;
        if( ara[i] % k == 0 ) {

            cnt1 = l[ara[i]/k];
        }

        l[ara[i]]++;

        if( ara[i] % k == 0 ) {
            cnt2 = r[ara[i]*k] - l[ara[i] *k] ;
            ans += cnt1 * cnt2;
            //cout<<ara[i]<<" "<<cnt1<< " "<<cnt2<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
