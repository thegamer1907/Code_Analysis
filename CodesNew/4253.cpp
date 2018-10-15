#include <bits/stdc++.h>

using namespace std;

string str[520000];
int main() {
    int n;
//    string s = "123456";
//    s = s.substr(0,2);
//    cout << s << endl;
    while(cin >> n) {
        for(int i = 0; i < n; i++) cin >> str[i];
        for(int i = n - 1; i >= 1; i--) {
            if(str[i] < str[i - 1]) {
                int flag = 0;
                int len = str[i].size();
                int len1 = str[i - 1].size();
                for(int j = 0,k = 0; j < len && k < len1; j++,k++) {
                    if(str[i - 1][j] > str[i][k] ) {
                        str[i - 1] = str[i - 1].substr(0,k);
                        flag = 1;
                        break;
                    }
                }
                if(!flag) {
                    if(str[i][len - 1]  <= str[i - 1][len - 1]) {
                        str[i - 1] = str[i - 1].substr(0,len);
                    }
                }

            }
        }
        for(int i = 0; i < n; i++) {
            cout << str[i] << endl;
        }
    }
    return 0;
}
