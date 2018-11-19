#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string s , sl;
int main() {
    cin >> s;
    int n;
    cin >> n;
    int first = 0 , second = 0;
    int flag = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> sl;
        if(sl == s) flag = 1;
        if(sl[1] == s[0]) first++;
        if(sl[0] == s[1]) second++;
    }
    if(first && second) flag = 1;
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}