// #include "/Users/konwoo/stdc++.h"


//#include <bits/stdc++.h>
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif


//#include <ext/pb_ds/assoc_container.hpp>

// #include <unordered_set>
// #include <set>
// using namespace __gnu_pbds;
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;


#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

//const int MOD = 1000000009;
double PI = 4*atan(1);

//#include <ext/pb_ds/assoc_container.hpp>


// typedef tree<int, null_type, less<int>, rb_tree_tag,
//         tree_order_statistics_node_update> indexed_set;

// typedef tree<pii,null_type, less<pii> ,rb_tree_tag, tree_order_statistics_node_update> set_t;

#define EPS 1e-9
const int M = 1010;
int n, l;
int arr[M];

bool valid(double x){
    if(arr[0] - x > EPS) return 0;
    if (arr[n-1] + x - l < EPS) return 0;
    F0R(j, n-1){
        if ((arr[j] - arr[j+1] + 2*x) < EPS){
            return 0;
        }
    }
    return 1;
}


int main(){
   // ifstream fin("/Users/konwoo/input.txt");
   // ofstream fout("/Users/konwoo/output.txt");
//    ifstream fin("multimoo.in");
//    ofstream fout("multimoo.out");
   // freopen("/Users/konwoo/desktop/input.txt","r",stdin);
   // freopen("/Users/konwoo/desktop/output.txt","w",stdout);
    
    cin >> n >> l;
    F0R(i, n) cin >> arr[i];
    sort(arr, arr+n);
    double low = 0.0, hi = 1000000050.0, mid = 0.000000000, ans = 0.000000000;
    F0R(i, 60){
        mid = (low + hi)/2.0;
        if (valid(mid)) { ans = mid; hi = mid;}
        else low = mid;
    }
    printf("%.8f", ans);
    
    
    
    
    

    return 0;
}










