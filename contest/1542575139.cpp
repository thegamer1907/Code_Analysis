//written by libra9z
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
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
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <valarray>
#include <utility>
#include <numeric>
#include <memory>
#include <functional>
#include <stdexcept>
#include <typeinfo>
#include <limits>
#include <complex>
#include <locale>
using namespace std;
#define Debug(x) cerr << #x << " = " << x << endl
#define Debug22(x,y) cerr<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define Debug2(x, y) cerr << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")\n";
#define Debug3(x,y,z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = ("<<x<<", "<<y<<", "<<z<<")\n";
#define Debug_arr(v,n) for(int i=0;i<n;++i) cerr<<#v<<"["<<i<<"]"<<" = "<<v[i]<<endl;
#define SET(p,v) fill((__typeof(**p)*)p,(__typeof(**p)*)p+sizeof(p),v);
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define prl cerr << "called: " << __LINE__ << endl
#define all(s) s.begin(),s.end()
int h,m,s,t1,t2,T1,T2;
bool f1,f2;
double hh,mm,ss;
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	T1=min(t1,t2);T2=max(t1,t2);
	hh=h+m/60.0+s/3600.0;mm=m/5.0+s/300.0;ss=s/5.0;
	if (hh>=T1&&hh<=T2) f1=1;
	else f2=1;
	if (mm>=T1&&mm<=T2) f1=1;
	else f2=1;
	if (ss>=T1&&ss<=T2) f1=1;
	else f2=1;
	if (f1&&f2) cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}
