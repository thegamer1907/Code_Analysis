#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <map>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;
typedef long long ll;

#define sz int(1e6)
#define F first
#define S second
#define pb push_back

int d[] = {1, 5, 10, 20, 100};
int n, ans;

int main() {
    cin >> n;
    for (int i = 4; i >= 0; i--) {
        while (n >= d[i]) {
            n -= d[i];
            ans++;
        }
    }
    cout << ans;


}
