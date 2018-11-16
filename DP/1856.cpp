#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define N 1e9
int main(){
 ios_base::sync_with_stdio(0); cin.tie(0);
 string s; cin >> s;
 string t = s; int f = 0;
 int pos = s.find("AB"), pos2 = t.find("BA");
 if(pos != -1){
    s[pos] = s[pos + 1] = '$';
    pos = s.find("BA");
    if(pos != -1)
        f |= 1;
 }
 if(pos2 != -1){
    t[pos2] = t[pos2 + 1] = '$';
    pos2 = t.find("AB");
    if(pos2 != -1)
        f |= 1;
 }
 f?cout << "YES": cout << "NO";
}
