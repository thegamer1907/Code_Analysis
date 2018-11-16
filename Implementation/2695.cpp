#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>
#include <bitset>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>
#include <bitset>
#include <random>
#include <complex>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <cassert>
using namespace std;
#define ll long long
#define double long double
#define pb push_back

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a[105];
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        a[x] = i+1;
    }
    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";
        
    return 0;
}
