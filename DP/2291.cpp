#include     <algorithm>
#include         <array>
#include        <chrono>
#include         <cmath>
#include       <cstdint>
#include        <cstdio>
#include       <cstdlib>
#include       <cstring>
#include         <deque>
#include    <functional>
#include       <iomanip>
#include      <iostream>
#include      <iterator>
#include          <list>
#include           <map>
#include      <memory.h>
#include        <memory>
#include       <numeric>
#include         <queue>
#include        <random>
#include           <set>
#include       <sstream>
#include         <stack>
#include        <string>
#include <unordered_map>
#include <unordered_set>
#include        <vector>

using namespace std;

#ifdef OFFLINE_JUDGE
#define PROFBEG(wh) auto t1##wh = chrono::high_resolution_clock::now ();
#define PROFEND(wh) auto t2##wh = chrono::high_resolution_clock::now (); \
    chrono::duration<double> dur##wh = chrono::duration_cast<chrono::duration<double> > (t2##wh - t1##wh); \
    cout << endl << "time " << dur##wh.count () << endl;
#else
#define PROFBEG(wh)
#define PROFEND(wh) 
#endif

void myassert (bool expr) { if (!expr) abort (); }

typedef int64_t ll;
typedef uint64_t ull;
typedef long double ld;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

const ll posinf = 9223372036854775807LL;
const ll neginf = 9223372036854775808LL;
const ll bigprime = (1LL << 61) - 1LL;
const ll mult  =  199;
const ll mult2 = 3571;
const ll mod  = 1000000007LL;
const ll mod2 = 1000000009LL;
const ld pi = 3.1415926535897932384626433832795L;

template<typename T> T gcd (T a, T b) { while (b) { a %= b; swap (a, b); } return a; }

struct vec2 {
    int x, y;
    vec2 () : x (0), y (0) {}
    vec2 (int x_, int y_) : x (x_), y (y_) {}
    vec2 operator + (const vec2 &b) const { return vec2 (x + b.x, y + b.y); }
    vec2 operator - (const vec2 &b) const { return vec2 (x - b.x, y - b.y); }
    bool operator == (const vec2 &b) const { return x == b.x && y == b.y; }
    ld length () const { return sqrtl (ld (ll (x) * ll (x) + ll (y) * ll (y))); }
};



int main ()
{
#ifdef OFFLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	//freopen ("output.txt", "w", stdout);
#else
    //freopen ("kitchen.in", "r", stdin);
    //freopen ("kitchen.out", "w", stdout);
#endif
	cin.sync_with_stdio (false);
	cout.sync_with_stdio (false);
	cin.tie (0);
    //PROFBEG (main);

    int n, m;
    cin >> n >> m;
    vector<int> nums (n);
    for (int &i : nums)
        cin >> i;
    int cnt = 0;
    vector<char> used (100500);
    for (int i = n - 1; i >= 0; i--) {
        if (!used[nums[i]]) {
            cnt++;
            used[nums[i]] = 1;
        }
        nums[i] = cnt;
    }
    for (int i = 0; i < m; i++) {
        int l; cin >> l;
        cout << nums[l - 1] << endl;
    }

    //PROFEND (main);
	return 0;
}
