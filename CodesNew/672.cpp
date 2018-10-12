#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
set<string> s ;
int n,m ;
string ch ;
int main() {_
 cin >> n >> m ;
 for(int i=0;i<n+m;i++){
    cin >> ch ;
    s.insert(ch);
 }
 int common=n+m-s.size() ;
 if(common & 1){
    (n>=m) ? cout << "YES" : cout << "NO" ;
 }
 else {
    (n<=m) ? cout << "NO" : cout << "YES" ;
 }
}
