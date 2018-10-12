#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    auto a = vector<int>(n, 0);
    for(auto i = 0; i < n; ++i){
        cin >> a[i];
    }
    int ans = 0, sum = 0, p = 0, q = 0;
    while(q < n){
        while(q < n && sum + a[q] <= t){
            sum += a[q++];
        }
        ans = max(ans, q - p);
        sum -= a[p++];
    }
    cout << ans << endl;
    return 0;
}