#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       a*(b/gcd(a,b))
#define pii            pair<int, int>
#define pll            pair<ll, ll>
#define pil            pair<int, ll>
#define pli            pair<ll, int>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pii>
#define vll            vector<pll>
#define vil            vector<pil>
#define vli            vector<pli>
#define mii            map<int, int>
#define mll            map<ll, ll>
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define mt             make_tuple
#define lb             lower_bound
#define ub             upper_bound
#define ff             first
#define ss             second
#define all(v)         v.begin(),v.end()
#define fill(a,b)      memset(a,b,sizeof a)
#define smax(a, b)     a=max(a, b)
#define smin(a, b)     a=min(a, b)
#define square(x)      x*x
#define cube(x)        x*x*x
#define asort(a, n)    sort(a+1, a+n+1)
#define FOR(i, a, b)   for(int i=a;i<=b;i++)
#define ROF(i, a, b)   for(int i=b;i>=a;i--)
#define endl           '\n'

int in() {
    int n;
    scanf("%d",&n);
    return n;
}

ll Lin() {
    ll n;
    scanf("%lld",&n);
    return n;
}

double Din() {
    double n;
    scanf("%lf",&n);
    return n;
}

const double eps = 0.00000001;
const ll inf = 1e17;
const ll mod = 1e9 + 7;
const int N = 2e5 + 5;




int main() {
    string s;
    cin>>s;
    int n=in();
    string t[n+3];
    for(int i=1; i<=n; i++) {
        cin>>t[i];
        if(t[i]==s) return !printf("YES\n");
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            string temp="";
            temp.pb(t[i][1]);
            temp.pb(t[j][0]);
            if(temp==s) return !printf("YES\n");
        }
    }
    printf("NO\n");
    return 0;
}


