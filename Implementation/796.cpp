#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    string s;
    cin >> n >> t >> s;
    s += "~"; //dummy

    for (int i=0;i<t;i++) {
        for (int j=0;j<n;j++) {
            if (s.at(j) == 'B' && s.at(j+1) == 'G') {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    s.erase(s.end()-1,s.end());
    cout << s;

    return 0;
}
