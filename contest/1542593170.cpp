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
char s[5];
int n,a[210],b[210];
int main()
{
	cin>>s>>n;
	for (int i=0;i<n;i++)
	{
		char ch[5];
		cin>>ch;
		if ((s[0]==ch[0]) && (s[1]==ch[1]))
		{
			puts("YES");
			return 0;
		}
		a[ch[0]]++;
		b[ch[1]]++;
	}
	if (a[s[1]] && b[s[0]])
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
    return 0;
}