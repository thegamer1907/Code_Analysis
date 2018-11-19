#include <cmath>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
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
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define LL long long
using namespace std;
int q[70];
int main(){
	int h,m,s,t1,t2;
	float a,b,c;
	cin>>h>>m>>s>>t1>>t2;
	a=(h%12)*5+(float)5/60*m+(float)5/60/60*s;
	b=m+(float)5/60/60*s;
	c=s;
	t1=(t1%12)*5;
	t2=(t2%12)*5;
	if(a>b) swap(a,b);
	if(b>c) swap(b,c);
	if(a>b) swap(a,b);
	int i;
	if((int)a==a) i=a;
	else i=a+1;
	for(i;i<=b;i++) q[i]=1;
	if((int)b==b) i=b;
	else i=b+1;
	for(i;i<=c;i++) q[i]=2;
	if(q[t1]==q[t2]) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
