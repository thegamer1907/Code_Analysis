#include<bits/stdc++.h>
using namespace std;

#define ll             long long
#define LL             long long
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
#define pb             push_back
#define ppb            pop_back
#define mp             make_pair
#define ff             first
#define ss             second
#define all(v)         v.begin(),v.end()
#define fill(a,b)      memset(a,b,sizeof a)
#define smax(a, b)     a=max(a, b)
#define smin(a, b)     a=min(a, b)
#define sqr(x)         x*x
#define cube(x)        x*x*x
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

const ll inf = 1e17;
const ll mod = 1e9 + 7;
const int N = 1e7 + 5;

int a[N];

int two(int n, int val) {
    for(int i=1; i<=n; i++) {
        if((a[i]-val-i+1)<1) return i;
    }
    return -1;
}

int bs(int n) {
    int low=0, high=2e9/n, ans;
    while(low<=high) {
        int mid=(low+high)>>1;
        int id=two(n, n*mid);
        if(id>0) ans=id, high=mid-1;
        else low=mid+1;
    }
    return ans;
}

int main() {
    int n=in();
    for(int i=1; i<=n; i++) {
        a[i]=in();
    }
    printf("%d\n", bs(n));
    return 0;
}

