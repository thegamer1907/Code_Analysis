
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s,ch;
    bool f,ss;
    f = false;
    ss = false;
    int n;
    cin >> s;
    cin >> n;
    while(n--) {
        cin >> ch;
        if(s == ch)ss = f = true;
        if(ch[0] == s[1]) {
            ss = true;

        }
        if(ch[1] == s[0])
            f = true;
    }
    if(f && ss)cout << "YES" << endl;
    else cout << "NO" << endl;
}
