#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000
int main(){
    int n, t, f = 0; cin >> n >> t;
    vector<int>v(n);
    for(int i=0 ; i < n-1 ; i++) cin >> v[i];
    for(int i=1 ; i < n ; ){
        i += v[i-1];
        f |= (i == t);
    }
    f? cout << "YES": cout << "NO";
}
