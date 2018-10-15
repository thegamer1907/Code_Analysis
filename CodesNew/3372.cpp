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


const int MAX = 1010;
int a[MAX];

int main(){
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int mx = 0, S = 0;
    REP(i, n) scanf("%d", a + i), mx = max(mx, a[i]), S += a[i];
    S += m;
    printf("%d %d\n", max(mx, S/n + (S%n == 0 ? 0 : 1)), mx + m);
}