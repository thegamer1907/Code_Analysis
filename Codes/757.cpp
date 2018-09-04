#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int num = 19;
    while (k > 1) {
        num += 9;
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == 10) {
            k--;
        }
    }
    cout << num << endl;
}
