#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define s(args...); { scan(args); }
#define sd(args...); ll args; s(args);
#define sda(a,n); ll n; cin>>n ; ll a[n]; for(int i = 0 ; i<n ; i++) cin>>a[i];
#define sa(a,n) ll a[n]; for(int i =0 ; i<n ; i++) cin>>a[i]
void scan() {}
template<typename T, typename... Args>
void scan(T& a, Args&... args) { cin>>a; scan(args...); }

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define reps(i, a, s) for(i = a; s[i] != '\0'; i++)
#define pll pair<ll, ll>
#define vl vector <ll>
#define vpl vector < pll >
#define vll vector < vl >
#define nl printf("\n");
#define all(v) v.begin(), v.end()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932
#define MOD 1000000007
#define M 998244353
#define INF 1000000000007
#define NMAX 100005

#define Test                  ll T; s(T); while(T--)
#define prl(args)             cout<<args<<'\n';
#define pra(a,n)              for(size_t zz=0;zz<n;zz++) cout<<a[zz]<<' '; cout<<'\n';
#define prv(a)                for(auto zz:a) cout<<a[zz]<<' '; cout<<'\n';
#define tr1(x)                cout <<#x<<": "<<x<< endl;
#define tr2(x, y)             cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define tr3(x, y, z)          cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define tr4(a, b, c, d)       cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define tr5(a, b, c, d, e)    cerr <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;



int32_t main() {
    sd(n,m,k);
    sa(a,m);

    int ans = 0 ;
    int d = 0 ;
    int i = 0 ;

    while(i<m){
        int t = (a[i]-1-d)/k;
        //tr1(a[i]);
        while(i<m && (a[i]-1-d)/k == t) i++;
        ans++;
        d = i;
    }

    prl(ans);
}