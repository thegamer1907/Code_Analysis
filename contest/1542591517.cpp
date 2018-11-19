#include<bits/stdc++.h>
#define x first
#define y second
#define sz size()
#define pb push_back
#define ALL(X) (X).begin(),(X).end()
using namespace std;
using ll = long long;
using ii =  pair<int,int>;
const int MOD(1e9+7);
const int MAXN(1e5+11);

int n;

int main()
{
    char t[111], s[111][111];
    scanf("%s%d", t, &n);
    for (int i = 0; i < n; i++) scanf("%s", s[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string x = string(s[i]) + s[j];
            for (int u = 0; u+1 < x.sz; u++) {
                bool okay = true; int cnt = 0;
                for (int k = 0; k < 2; k++) {
                    okay &= x[u+k] == t[k];
                    cnt += 1;
                }
                if (okay && cnt == 2) return puts("YES"), 0;
            }
        }
    }
    return puts("NO"), 0;
    return 0;
}

