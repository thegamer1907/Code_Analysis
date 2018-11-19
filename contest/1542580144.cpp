#include <bits/stdc++.h>
using namespace std;
string s,str;
int n;
int main() {
    cin >> s;
    cin >> n;
    int flag=0,cc=0;
    int cnt1=0,cnt2=0;
    for(int i=1;i<=n;++i) {
        cin >> str;
        if(str[0]==s[1]) {
            cnt1++;
        }
        if(s==str) cc=1;
        if(str[1]==s[0]) cnt2++;
        if(str[0]==s[1]&&str[1]==s[0]) flag=1;

    }
    if((!cnt1||!cnt2)&&!cc) {
        cout << "NO" << endl; return 0;
    }
    else cout << "YES" << endl;

    return 0;
}
