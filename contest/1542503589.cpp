#include <bits/stdc++.h>
#define ll long long
using namespace std;


int  main() {

    int n, flag = 0, first = 0, second = 0;

    string s;

    cin >> s;

    cin >> n;

    for(int i = 0;i < n;i++) {

        string c;
        cin >> c;

        if(c == s) flag = 1;

        if(c[0] == s[1]) second = 1;
        if(c[1] == s[0]) first = 1;
        //cout << c[1] << ' ' << s[0] << endl;
    }
    //cout  << flag << ' ' << first << ' ' << second << endl;
    if(flag || (first && second)) cout << "yes" << endl;
    else cout << "no" << endl;
}
