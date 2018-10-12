#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m, sum = 0, maximum = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a > maximum) maximum = a;
        sum += a;
    }
    cout << max((int)ceil(float(sum + m) / n), maximum) << " " << maximum + m;
    return 0;
}