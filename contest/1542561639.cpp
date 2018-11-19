#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
const int N =205;
string s[N];
int n, m;
int ans[N];
int fun(string x) {
    for(int i = 6; i >= 1; --i) {
        bool f = 1;
        for(int j = 0; j < (1<<i); ++j) {
            string t;
            for(int k = 0; k < i; ++k) {
                if(j & (1<<k)) t += '1';
                else t += '0';
            }
            if(x.find(t) == string::npos) {f = 0; break;}
        }
        if(f) return i;
    }
    return 0;
}
int main() {
    memset(ans, 0, sizeof(ans));
    int i, j, a, b;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) cin >> s[i];
    scanf("%d", &m);
    for(i = n+1; i <= n+m; ++i) {
        scanf("%d%d", &a, &b);
        s[i] = s[a] + s[b];
        if(s[i].length()>1000) {
            string t = s[i].substr(0, 500) + s[i].substr(s[i].length()-500, 500);
            s[i] = t;
        }
        ans[i] = max(fun(s[i]), max(ans[a], ans[b]));
        printf("%d\n" , ans[i]);
    }
    return 0;
}