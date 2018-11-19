#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string pw;
    cin >> pw;
    int n;
    cin >> n;
    bool y1 = false;
    bool y2 = false;
    for (int i = 0; i < n; i ++){
        string s;
        cin >> s;
        if (s[0] == pw[1]) y2 = true;
        if (s[1] == pw[0]) y1 = true;
        if (s[0] == pw[0] && s[1] == pw[1]){
            y1 = true;y2 = true;
        }
    }
    if (y1 && y2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

