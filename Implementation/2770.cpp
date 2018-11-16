#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    int mx = a[0];
    for (int value : a) mx = max(mx, value);
    
    int answer = 0;
    for (int value : a) answer += mx - value;
    
    cout << answer << endl;
    
    return 0;
}