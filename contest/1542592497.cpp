#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool vis[256];

int main() {
    string s;
    cin >> s;
    vis[s[0]]++;
    vis[s[1]]++;
    int n;
    cin >> n;
    string temp;
    bool flg = 0;
    bool fs = 0, sf = 0;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(temp == s) {
            flg = 1;
            break;
        }
        if(s[0] == temp[1]) {
            fs = 1;
        }
        if(s[1] == temp[0]) {
            sf = 1;
        }
        if(fs && sf) {
            flg = 1;
            break;
        }
    }
    if(flg) {
        puts("YES");
    }else {
        puts("NO");
    }
}
