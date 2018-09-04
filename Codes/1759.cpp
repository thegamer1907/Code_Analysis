#include <bits/stdc++.h>
#define ll          long long int
#define PI      	acos(-1)
#define read    	freopen("in.txt","r",stdin)
#define uu      	first
#define vv      	second
#define write   	freopen("out.txt","w",stdout)
#define pii     	pair<int,int>
#define INF     	1e9
#define EPS     	1e-8
#define MAX     	1000006
#define MOD     	1000000007
#define fastRead 	ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
ll n , m , k;

ll place(ll x) {

    ll sum = 0;
    for(int i = 1 ; i <= n ; i++ ) {
        sum += min( ( (x-1) /i) , m);
    }
//    cout<<x<<" "<<sum<<endl;
    return sum;
}

int main()
{
    cin>>n>>m>>k;
    ll lo = 0 , hi = (n*m) +1;
    while( lo < hi) {

        ll mid = (lo + hi)/2;
        if( place(mid) < k ) lo = mid+1;
        else hi = mid;
    }
    cout<<lo-1<<endl;
    return 0;
}
