#include <bits/stdc++.h>
using namespace std;
 

#define ll long long 
#define eps 1e-10
#define fi first
#define se second
#define MOD1 1000000007LL
#define MOD 1000000007LL
#define p1 53
#define se second
#define INF 200000005
#define pb push_back
#define pii pair<int,int> 

int gcd1(int a, int b) {
    if (a == 0)
        return b;
    return gcd1(b % a, a);
}

const int maxn = 1e5 +5;
int n, m, x, y, k, s;
int a[maxn];
int cnt[maxn];

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("B1.in", "r", stdin);
    // freopen("out.out","w", stdout );
    
    cin >> n;
    int ans = 0, temp = 0;

    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(a[i] == i)
            ans++;
        else
            cnt[a[i]] ++;
    }

    for(int i=1; i<=n; i++){
        if(cnt[i] > 0)
            temp ++;
    }

    cout << ans + temp/2 << endl;

    return 0;
}