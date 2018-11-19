#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <locale>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <exception>
#include <functional>
#include <map>
#include <ios>
#include <iosfwd>
#include <istream>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <utility>
#include <vector>
#include <cwchar>
#include <cwctype>
#include <complex.h>
#include <fenv.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <tgmath.h>
#include <conio.h>
#include <numeric>
#include <list>
#include <windows.h>
#include <cfloat>
#include <climits>
#include <unordered_map>
#include <unordered_set>
using namespace std;

typedef long long ll;
#define ll(n) (long long)(n)
#define fl(n) (float)(n)
#define dou(n) (double)(n)

int h,m,s,t1,t2,T1,T2;
bool f1,f2;
double hh,mm,ss;

int main()
{
	cin>>h>>m>>s>>t1>>t2;
	T1=min(t1,t2);T2=max(t1,t2);
	
	hh=h+m/60.0+s/3600.0;mm=m/5.0+s/300.0;ss=s/5.0;
	
	if(hh>=T1&&hh<=T2) f1=1; else f2=1;
	if(mm>=T1&&mm<=T2) f1=1; else f2=1;
	if(ss>=T1&&ss<=T2) f1=1; else f2=1;
	
	if(f1&&f2) cout<<"NO"; else cout<<"YES";
	
	return 0;
}