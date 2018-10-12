//COUNTING PATHS IN DAG DP 
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
#include <cstring>
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
#include <time.h>
#pragma comment(linker, "/STACK:20000000")
#endif
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
// #define INF 0x7f7f7f7f
#define ull unsigned long long int
#define pii pair<int,int>
#define ll long long
// #define ld long double
// #define l long 
#define se second
#define fi first
#define UNVISITED -1
#define EXPOLORED 0
#define mk make_pair
#define pb push_back
#define sc(n) scanf("%d",&n)
#define pii pair<int,int>
#define eps 1e-8
#define sz(a) a.size()
#define all(x) x.begin(),x.end()
#define me(u,v,w) make_pair(w,make_pair(u,v))
#define inrange(x,y,row,col) (x>=0 && y>=0 && x<row && y<col)
#define foreach(e, x) for(__typeof(x.begin()) e = x.begin(); e != x.end(); ++ e)
#define add(a,b) (a + b >= MOD ? a+b-MOD:a+b)
#define hs(c1,c2) (256*min(c1,c2) + max(c1,c2))
template<typename T>T gcd(T x,T y){if(y==0)return x;return gcd(y,x%y);}
typedef long double ld;
typedef complex<ld> cd;

typedef pair<ll, ll> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<ll> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
const double epss = 1e-9;
const int INF = 1e9;
const int mod = 1e9+7;
const int N = 5e5+100;
const double PI = acos(-1);
// Radius of incircle is min(a,b,c)
string a[N];int n;
int b[N],len[N];
int main(){
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		b[i] = a[i].length();
	}
	len[n] = b[n];
	for(int i=n;i>1;--i){
		bool flag = 0;
		for(int j=0;j<len[i];++j){
			if(j>=b[i-1]){

			}
			if(a[i][j] < a[i-1][j]){
				len[i-1] = j;
				flag = 1;
				break;
			}
			if(a[i][j] > a[i-1][j]){
				len[i-1] = b[i-1];
				flag = 1;
				break;
			}
		}
		if(!flag){
			len[i-1] = len[i];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=0;j<len[i];++j){
			putchar(a[i][j]);
		}
		puts("");
	}
}