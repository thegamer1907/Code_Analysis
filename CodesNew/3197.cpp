//ITNOA
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include <random>
#include <stack>
#include <bitset>

using namespace std;

#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

#define rep(i, s, e) for(int i = s; i < e; i ++)
#define X first
#define Y second

typedef long long ll;
typedef long double ld;

#define int long long

const int maxN = 300*1000 + 5;
const int mod = 1000*1000*1000 + 7;
const int base = 701;
const int SQ = 500;
const int maxL = 17;

int n, a[maxN];

int check(int k, bool pr) {
    int mn = mod, res = -1;
    int sum = 0;
    for(int i = 0; i < n; i ++) {
        sum += 1 - a[i];
        if(i >= k)
            sum -= 1 - a[i-k];
        if(i >= k-1)
            if(sum < mn) {
                mn = sum;
                res = i;
            }
    }

    if(pr) {
        for(int i = 0; i < k; i ++)
            a[res - i] = 1;
        for(int i = 0; i < n; i ++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return mn;
}
int k;

int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for(int i = 0; i < n; i ++)
        cin >> a[i];

    int lo = 0, hi = n+1;
    while(hi-lo > 1) {
        int mid = (hi + lo) / 2;
        if(check(mid, false) <= k)
            lo = mid;
        else
            hi = mid;
    }
    cout << lo << endl;
    check(lo, true);
    return 0;
}
