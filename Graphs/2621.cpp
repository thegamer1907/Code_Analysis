#include <bits/stdc++.h>
using namespace std;
 

#define ll long long 
#define eps 1e-10
#define fi first
#define se second
#define MOD1 1000000007LL
#define MOD 1000000009LL
#define p1 53
#define se second
#define inf 20000000000LL
#define pb push_back

ll gcd1(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd1(b % a, a);
}


ll modx(ll base, ll ex)
{
    ll ans = 1LL, val = base;
    while(ex > 0LL)
    {
        if(ex&1LL)
            ans = (ans*val)%MOD;
        val = (val*val)%MOD;
        ex = ex>>1LL;
    }
    return ans;
}

const int maxn = 1e5 + 15;
int a[maxn], temp;
int sz;
int id[maxn];

void init(int n){

    for(int i=1; i<=n; i++)
        id[i] = i;
    sz = n;
}

int root(int a){

    while(id[a]!=a){
        id[a] = id[id[a]];
        a = id[a];
    }

    return a;
}

void union1(int a, int b){

    a = root(a);
    b = root(b);

    if(a==b) return;
    id[a] = id[b];
    sz--;
}

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll ans = 0;

    int n, m;

    cin >>n;
    init(n);

    for(int i=1; i<=n; i++){
        cin >> a[i];
        union1(i, a[i]);
    }

    cout << sz << endl;

    return 0;
}