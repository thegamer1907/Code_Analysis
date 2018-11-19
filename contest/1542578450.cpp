#include <bits/stdc++.h>

using namespace std;

string s, c[111];
char a;
int n;
vector < char > cons;
main(){
cin >> s;
cin >> n;
for (int i = 1; i <= n; i++){
    cin >> c[i];
    c[n+i] = c[i];
    if (c[i] == s){
        cout << "YES";
        return 0;
    }
}
for (int i = 1; i < 2*n; i++){
    for (int j = i + 1; j <= 2*n; j++){
        if (c[i][1] == s[0] && c[j][0] == s[1]){
            cout << "YES";
            return 0;
        }
        if (c[i][0] == s[1] && c[j][1] == s[0]){
            cout << "YES";
            return 0;
        }
    }
}
cout << "NO";
}
