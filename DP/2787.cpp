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

/*struct vec3 {
    ld x, y, z;
    vec3 () noexcept : x (0), y (0), z (0) {}
    vec3 (ld x_, ld y_, ld z_) noexcept : x (x_), y (y_), z (z_) {}
    vec3 operator - () const noexcept { return vec3 (-x, -y, -z); }
    vec3 operator - (const vec3 &b) const noexcept { return vec3 (x - b.x, y - b.y, z - b.z); }
    vec3 operator + (const vec3 &b) const noexcept { return vec3 (x + b.x, y + b.y, z + b.z); }
    ld operator * () const noexcept { return x * x + y * y + z * z; }
    ld operator ++ (int) const noexcept { return sqrtl (x * x + y * y + z * z); }
};

istream &operator >> (istream &str, vec3 &vec) { return str >> vec.x >> vec.y >> vec.z; }*/



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
    
    string s; cin >> s;
    vector<string> ans;
    while (true) {
        bool flag = true;
        for (int i = 0; i < s.length (); i++) {
            if (s[i] == '0')
                continue;
            flag = false;
        }
        if (flag)
            break;
        string a;
        flag = false;
        for (int i = 0; i < s.length (); i++) {
            if (s[i] != '0') {
                flag = true;
                a.push_back ('1');
                s[i]--;
            }
            else if (flag)
                a.push_back ('0');
        }
        ans.emplace_back (move (a));
    }
    cout << ans.size () << endl;
    for (auto &i : ans)
        cout << i << ' ';

    //PROFEND (main);
	return 0;
}

// sum = for (; i >= 0; i = (i & (i + 1)) - 1)
// inc = for (; i < n; i = i | (i + 1))
