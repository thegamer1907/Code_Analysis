#include <iostream>
using namespace std;
int a[1234567];
int main(){
    int i, n , t;
    cin >> n >> t;
    for(i = 1; i < n; ++i) cin >> a[i];
    int x = 1;
    while(x < t){
        x += a[x];
    }
    if(x == t) cout << "YES";
    else cout << "NO";
    return 0;
}