#include <random>
#include <vector>
#include <cstdio>
#include <iostream>
#include <tuple>
#include <stdexcept>
#include <map>
#include <set>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstring>
#include <deque>
#include <numeric>
#include <unordered_map>
#include <bitset>
#include <queue>

#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
#define mod ll(1e9 + 7)
#define mp make_pair
#define pb push_back
#define sqr(xx) ((xx)*(xx))
#define sz int(1e6)

int a[sz], h[sz], n;

int main() {
    cin >> n;
    if(n == 1)
    {
        cout << "1";
        return 0;
    }
    int cnt = 2;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> h[i];
    }
    for(int i = 1; i < n-1; i++)
    {
        if (a[i] - a[i-1] > h[i])
            cnt++;
        else if (a[i+1] - a[i] > h[i])
        {
            cnt++;
            a[i] += h[i];
        }
    }
    cout << cnt;
}
