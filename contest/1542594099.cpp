#include <bits/stdc++.h>
#define readFile freopen("in.txt","r",stdin)
#define writeFile freopen("qqq.txt","w",stdout)
#define fastIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
 
using namespace std;
 
const int N = 100010;
string a[N];

int main() {
#ifndef ONLINE_JUDGE
    readFile;
#endif 
    fastIO;
    string s; cin >> s;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]==s){
            puts("YES");
            return 0;
        }
    }
    bool k1 = 0,k2 = 0;
    for(int i = 0; i < n; i++){
        if(a[i][0]==s[1]){
            k1 = 1;
        }
        if(a[i][1]==s[0]){
            k2 = 2;
        }
    }
    puts((k1&&k2) ? "YES" : "NO");
    return 0;
}  