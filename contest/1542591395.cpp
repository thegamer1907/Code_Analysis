#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    string pt[112];
    int pw[35][35]={};
    for (int i = 0; i < n; ++i) {
        cin>>pt[i];
        pw[pt[i][0] - 'a'][pt[i][1] - 'a'] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //if(i==j) continue;
            pw[pt[j][1] - 'a'][pt[i][0] - 'a'] = 1;
        }
    }

    if(pw[s[0] - 'a'][s[1] - 'a'])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}