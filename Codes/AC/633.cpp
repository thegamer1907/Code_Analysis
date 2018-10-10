#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cstring>
#include <algorithm>
#include <functional>
#include <chrono>
#include <iomanip>
#include <queue>
#include <list>
#include <iomanip>
#include <unordered_map>

#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long>
#define fill(v, a) vector<ll> v(a, a + sizeof(a) / sizeof(int));
#define printv(v) for(auto qq : v) cout << qq << " "; cout << endl;

using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
const int MAXN = (int)1e6 + 5;

int k;

int sumdigits(int x){
    int ret = 0;
    while (x > 0){
        ret += x%10;
        x /= 10;
    }
    return ret;
}

int main()
{
    cin >> k;
    for (int i=19; i<100000000; ++i){
        if (sumdigits(i) == 10)
            k--;
        if (k == 0){
            cout << i;
            break;
        }
    }
    return 0;   
}
