#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define FOR(i, a, b) for (int i = a; i < int(b); i++)
#define FOREACH(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define SIZE(v) ((int)(v).size())
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define ll long long
#define pii pair<int, int>

const int MAX = 200200;

ll a[MAX], k[MAX];

int main(){
    int n, q; scanf("%d %d", &n, &q);
    REP(i, n) scanf("%lld", a + i);
    for(int i = 1; i < n; i++) a[i] += a[i - 1];

    ll acc = 0;
    REP(i, q) scanf("%lld", k + i);
    REP(i, q){
        acc += k[i];

        if(acc >= a[n - 1]){
            acc = 0;
            printf("%d\n", n);
        }
        else{
            int l = 0, m, r = n - 1;
            while(l != r){
                m = (l + r)/2;
                if(acc < a[m]) r = m;
                else l = m + 1;
            }
            printf("%d\n", n - l);
        }
    }
}