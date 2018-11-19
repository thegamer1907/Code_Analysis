#include<cmath>
#include<math.h>
#include<ctype.h>
#include<algorithm>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<climits>
#include<clocale>
#include<complex>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cwchar>
#include<cwctype>
#include<deque>
#include<exception>
#include<fstream>
#include<functional>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include<iostream>
#include<istream>
#include<iterator>
#include<limits>
#include<list>
#include<locale>
#include<map>
#include<memory>
#include<new>
#include<numeric>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<stdexcept>
#include<streambuf>
#include<string>
#include<typeinfo>
#include<utility>
#include<valarray>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
double h,m,s,t1,t2;
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	if (h>=12)
	{
		h-=12;
	}
	if (t1>=12)
	{
		t1-=12;
	}
	if (t2>=12)
	{
		t2-=12;
	}
	h*=5;
	t1*=5;
	t2*=5;
	if (s!=0 || m!=0)
	{
		h+=0.3;
	}
	if (s!=0)
	{
		m+=0.5;
	}
	int cnt=0;
	if ((t1-h)*(t2-h)<0)
	{
		cnt++;
	}
	if ((t1-m)*(t2-m)<0)
	{
		cnt++;
	}
	if ((t1-s)*(t2-s)<0)
	{
		cnt++;
	}
	if (cnt==0 || cnt==3)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
    return 0;
}