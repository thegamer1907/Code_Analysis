#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i<=b; i++)
#define FORD(i, a, b) for (int i = a; i>=b; i--)
#define REP(i, a) for (int i = 0; i<a; i++)
#define N 100100
#define pp pair<int, int>
#define IO ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

using namespace std;
int n, k,cnt[16];
int main() {
    IO;
    cin>>n>>k;
    REP(i, n) {
        int a = 0;
        REP(j, k) {
            int x;
            cin>>x;
            a += x << j;
        }
        cnt[a]++;
    }
    if (cnt[0]) {
        cout<<"YES";return 0;
    }
    REP(i, 15) FOR(j, i + 1, 15) {
        if (cnt[i] && cnt[j] && !(i & j)) {
            cout<<"YES";return 0;
        }
    }
    cout<<"NO";
}