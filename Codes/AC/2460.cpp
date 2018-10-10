#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <limits>
#include <utility>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <map>
#include <stack>
#include <numeric>
#include <set>

#define endl '\n'
using namespace std;

const int MAXX = 10 * 1000 * 1000 + 100; 
int numbers[MAXX], fp[MAXX], psum[MAXX];
bool sieve[MAXX];

void eratosthenes() {
    for (int i = 2; i < MAXX; i++)
        sieve[i] = true;

    for (int i = 2; i < MAXX; i++)
        if (sieve[i]) {
            fp[i] += numbers[i];
            for (int j = 2 * i; j < MAXX; j += i) {
                sieve[j] = false;
                fp[i] += numbers[j];
            }
        }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, buf;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> buf;
        numbers[buf]++;
    }

    eratosthenes(); 
    psum[0] = fp[0];
    for (int i = 1; i < MAXX; i++)
        psum[i] = psum[i-1] + fp[i];

    int m, left, right;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> left >> right;
        left = min(left, MAXX - 1);
        right = min(right, MAXX - 1);

        cout << psum[right] - (left == 0 ? 0 : psum[left-1]) << endl;
    }

    return 0;
}