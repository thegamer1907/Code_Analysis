#include <bits/stdc++.h>

using namespace std;


string passwd;
bool a;
bool b;
int n;
string s;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> passwd;
    cin >> n;
    
    for(int i=0; i<n; ++i){
        cin >> s;
        if(s == passwd){
          cout << "YES" << endl;
          return 0;
        }
        if(s[1] == passwd[0]) a = 1;
        if(s[0] == passwd[1]) b = 1;
    }

    cout << ((a&&b) ? "YES" : "NO") << endl;

    return 0;
}