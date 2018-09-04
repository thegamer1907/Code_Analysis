#include <iostream>
#include<algorithm>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main(){
    long long k, ans = 19;
    cin >> k;
    long long cur = 1;
    while (cur != k) {
        ans += 9;
        long long sum = 0;
        long long temp = ans;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 10) {
            cur++;
        }
    }
    cout << ans;
    return 0;
}

