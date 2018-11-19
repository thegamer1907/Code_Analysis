#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
const int siz = 1e5 + 3;

int main() {
    string s;
    cin>>s;
    int n, ok = 0, d = 0, e = 0;
    scanf("%d", &n);
    for(int i = 0;i < n; ++i) {
        string tmp;
        cin>>tmp;
        if(tmp[0] == s[0] && tmp[1] == s[1])
            ok = 1;
        if(tmp[1] == s[0])
            d = 1;
        if(tmp[0] == s[1])
            e = 1;
    }
    if(ok || (d && e))
        printf("YES\n");
    else
        printf("NO\n");
}