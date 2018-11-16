#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 100005
int main(){
    int n; cin >> n;
    int x, y, z;
    x = y = z = 0;
    for(int i=0, a, b, c ; i < n ; i++){
        cin >> a >> b >> c;
        x += a, y += b, z += c;
    }
    (!x && !y && !z)? cout << "YES": cout << "NO";
}
