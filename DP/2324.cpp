



#include <bits/stdc++.h>

using namespace std;

string ans[200];
int cnt = 0;
int main() {
    string str;
    for(int i = 1; i <= 200; i++) {
        int x = i * 8; 
        string strr = "";
        while(x) {
            strr += x % 10 + '0';
            x /= 10;
        }
        reverse(strr.begin(),strr.end());
        ans[cnt++] = strr;
    } 
    while(cin >> str) {
        if(str.find('0') != -1) {
                cout << "yes" << endl;
            printf("0\n");
            continue;
        } else {
            for(int i = 0; i < cnt; i++) {
                int len = str.size();
                int l = 0;
                int r = ans[i].size();
                int flag = 0;
                for(int j = 0; j < len; j++) {
                    if(ans[i][l] == str[j]) {
                        l++;
                    }
                    if(l == r) {
                        flag = 1;
                    }
                }
                if(flag) {
                        cout << "yes" << endl;
                    cout<<ans[i] << endl;
                    return 0;
                }
            }
        }
        cout<<"no"<<endl;

    }
    return 0;
}

