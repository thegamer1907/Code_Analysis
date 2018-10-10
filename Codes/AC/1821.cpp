#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define MEM(p, v) memset(p, v, sizeof(p))
#define mp(x,y) make_pair(x,y) 

//LLONG_MAX,LLONG_MIN
typedef long long int ll;
typedef vector<int> vi;
const ll M=1e9+7;
const ll N=1e5;
const ll L=1e5;

template< class T > T max3(const T &a, const T &b, const T &c) { return max2(a, max2(b, c)); }
template< class T > T min3(const T &a, const T &b, const T &c) { return min2(a, min2(b, c)); }
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }


typedef struct s{
	ll d1,d2;
}inp;

void solve()
{
	return ;
}

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
	#endif
    ll n,m,k,i;
    cin >> n >> m >> k;
    ll l=1,r=n*m+1;
    while(l<r)
    {
        ll x=(l+r)/2;
        ll count=0;
       for(i=1;i<=n;i++)
            count+=min((x-1)/i,m);
        if(count<k)
            l=x+1;
        else
            r=x;
    }
    cout << l-1;
}