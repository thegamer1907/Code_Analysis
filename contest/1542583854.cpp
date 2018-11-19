#include <cassert>
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
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
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
#pragma comment(linker, "/STACK:1024000000,1024000000") 
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define EPS 1e-10
#define set0(x) memset((x),0,sizeof(x))
#define setINF(x) memset((x),63,sizeof(x))
using namespace std;
int n,k;
bool a[20];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int st=0;
		for(int j=0;j<k;j++){
			int x;
			cin>>x;
			st+=(x<<j);
		}
		a[st]=true;
	}
	int N=1<<k;
	for(int i=1;i<(1<<N);i++){
		bool frog=true;
		for(int j=0;j<N;j++){
			if((i>>j)&1 && !a[j]){
				frog=false;
				break;
			}
		}
		if(!frog)continue;
		int c[5]={0,0,0,0,0},tot=0;
		for(int j=0;j<N;j++){
			if((i>>j)&1){
				tot++;
				for(int l=0;l<4;l++){
					if((j>>l)&1)c[l]++;
				}
			}
		}
		for(int l=0;l<4;l++){
			if(c[l]*2>tot){
				frog=false;
				break;
			}
		}
		if(frog){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}