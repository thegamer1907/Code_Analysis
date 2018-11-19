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
string s,s1,s2;
int n;
int main()
{
	cin>>s>>n;
	for (int i=0;i<n;++i)
	{
		string p;
		cin>>p;
		if (p==s) 
		{
			puts("YES");
			return 0;
		}
		s1+=p[0],s2+=p[1];
	}
	for (int i=0;i<n;++i)
	{
		for (int j=0;j<n;++j)
		{
			string p="";
			p+=s2[j];
			p+=s1[i];
			if (p==s)
			{
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
