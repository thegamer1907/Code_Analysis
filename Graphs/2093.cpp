#include <iostream>

using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    if (n >= m){
        cout << n - m;
        return 0;
    }
    while (n < m){
        ans += 1 + (m % 2);
        m = (m + 1) / 2;
    }
    ans += n - m;
    cout << ans;
    return 0;
}
