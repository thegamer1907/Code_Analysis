#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
string s;
string a[500];
int n;
int main() {
    cin >> s>>n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int flag = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            string  str=a[i]+a[j];
            for(int i=0;i<3;i++){
                if(str.substr(i,2)==s) flag=1;
            }
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
