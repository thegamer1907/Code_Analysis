#include <bits/stdc++.h>
using namespace std;
string s[500000 + 10];
int main() {
    //freopen("input.txt", "r", stdin);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    while(cin >> n) {
        for(int i =  0; i < n; i++) {
            cin >> s[i];
        }
        for(int i = n-2; i >= 0; i--) {
            int l1 = s[i].size(), l2 = s[i+1].size();
            int cur1=0, cur2 = 0;
            while(cur1 < l1) {
                if(s[i][cur1] == s[i+1][cur2]) {
                    cur1++;
                    cur2++;
                }
                else if(s[i][cur1] > s[i+1][cur2] || cur2 == l2){
                    s[i].resize(cur1);
                    break;
                }
                else {
                    break;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            cout << s[i] << endl;
        }
    }
    return 0;
}