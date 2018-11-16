#include <iostream>

using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    while (n < m){
        ans += 1 + (m % 2);
        m = (m + 1) >> 1;
    }
    cout << ans + n - m;
    return 0;
}
