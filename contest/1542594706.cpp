#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for (int i = (a); i < (b); i++)
#define FO(i,a,b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplace_back
#define sz(v) int(v.size())
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

char s[11], ss[1000][11];
int n;
int ans;
int main() {
    scanf("%s %d", s, &n);
    fo(i,0,n) {
        scanf(" %s", ss[i]);
        if (strcmp(ss[i],s)==0) ans = 1;
    }
    int st = 0, end = 0;
    fo(i,0,n) {
        if (s[0] == ss[i][1]) st = 1;
        if (s[1] == ss[i][0]) end = 1;
    }   
    if (ans || (st && end)) puts("YES");
    else puts("NO");

    return 0;
}
