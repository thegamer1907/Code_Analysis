#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    if(n<=3) {
        cout<<"NO";
        return 0;
    }
    int f = 0, a = -1, b = -1;
    for(int i = 1; i < n; i++) {
        if(s[i-1]=='A' && s[i]=='B' && f!= 1) {
            //  s[i-1] = s[i] = 'C';
            a = i;
            f = 1;
        }
    }
    if(f) {
        for(int i = 1; i < n; i++) {

            if(s[i-1]=='B' && s[i]=='A' && i != a && i != a+1 && i+1 != a) {
                cout<<"YES";
                return 0;
            }
        }
    }
//    cout<<"roki"<<endl;
    f = 0, a = -1, b = -1;
    for(int i = 1; i < n; i++) {
        if(s[i-1]=='B' && s[i]=='A' && f!= 1) {
            //  s[i-1] = s[i] = 'C';
            a = i;
            f = 1;
        }
    }
    if(f) {
        for(int i = 1; i < n; i++) {
            if(s[i-1]=='A' && s[i]=='B' && i != a && i != a+1 && i+1 != a) {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";
    return 0;

}
