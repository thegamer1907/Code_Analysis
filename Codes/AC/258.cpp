#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define klar(v) memset(v, 0, sizeof(v))
#define SYNC ios_base::sync_with_stdio(false)
#define gcd(a, b) __gcd(a, b);

typedef vector<int> vi;
typedef vector<pair<int, int> > vpii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef long long ll;
const int maxn = 1e5+100;

int pref[maxn];

int main(){
    int n, x;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        pref[i] = pref[i-1]+x;
    }
    int q;
    scanf("%d", &q);
    while(q--){
        scanf("%d", &x);
        printf("%d\n", lower_bound(pref+1, pref+n+1, x)-pref);
    }
}
