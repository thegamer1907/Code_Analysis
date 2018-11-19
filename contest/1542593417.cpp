#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i<=b; i++)
#define FORD(i, a, b) for (int i = a; i>=b; i--)
#define REP(i, a) for (int i = 0; i<a; i++)
#define N 100100
#define pp pair<int, int>
#define IO ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    IO;
    bool first = false, second = false;
    int n;
    string s, st[1000];
    cin>>s>>n;
    REP(i, n) {
        cin>>st[i];
        if (st[i] == s) {
            cout<<"YES";return 0;
        }
    }
    REP(i, n) REP(j, n)  {
        if (st[i][1] == s[0] && st[j][0] == s[1]) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

