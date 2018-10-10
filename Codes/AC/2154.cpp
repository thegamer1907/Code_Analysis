#include <iostream>
#include <vector>

using namespace std;

vector<int> d;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        d.push_back(x);
    }
    
    long long maxsum = 0;
    long long sum1 = 0, sum2 = 0;
    int k = n-1;
    
    for (int i = 0; i <= k; ++i) {
        if (sum1 <= sum2) {
            sum1 += d[i];
        } else {
            sum2 += d[k];
            --k, --i;
        }
        if (sum1 == sum2) {
            maxsum = sum1;
        }
    }
    
    cout << maxsum << endl;
    
    return 0;
}
