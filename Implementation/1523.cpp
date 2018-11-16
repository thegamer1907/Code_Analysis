#include <bits/stdc++.h>
#define ll long long
#define vint vector <int>
using namespace std;
int main () {
string str; cin >> str;
int cons = 1;
bool d = false;
for (int i = 0; i < str.size() - 1; i++) {
    if (str[i] == str[i + 1]) cons++;
    else cons = 0;
    if (cons == 6) d = true;
}
if (d) cout << "YES";
else cout << "NO";
return 0;
}
