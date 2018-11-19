#include <bits/stdc++.h>

using namespace std;
string s[102], a;

int main() {
    int n;
    cin >> a >> n ;
    bool flag = false;
    for(int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    for(int i = 1; i <= n; i++) {
        if(s[i] == a) flag = true;
        for(int j = 1; j <= n; j++) {
            int len = s[j].size();
            if(s[i][0] == a[1] && s[j][len-1] == a[0]) {
                flag = true;
            }
        }
    }
    
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;

}