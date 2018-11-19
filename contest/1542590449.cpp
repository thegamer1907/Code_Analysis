#include <bits/stdc++.h>
using namespace std;
string s,a[101];
int n;
bool kt;
int main() {
    cin >>s>>n;
    for (int i=1;i<=n;i++) cin >>a[i];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++) {
            if (a[j][0]==s[0]&&a[j][1]==s[1]) kt=true;
            if (a[i][1]==s[0]&&a[j][0]==s[1]) kt=true;
        }
    if (kt) cout <<"YES"; else cout <<"NO";
    return 0;
}
