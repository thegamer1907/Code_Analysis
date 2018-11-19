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

string pass,t[110];
int n;

int main()
{
	cin>>pass>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
		if(t[i]==pass||t[i][0]==pass[1]&&t[i][1]==pass[0]) {cout<<"YES";exit(0);}
	}
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			char a=t[i][0],b=t[i][1],c=t[j][0],d=t[j][1];
			if(d==pass[0]&&a==pass[1]||b==pass[0]&&c==pass[1]) {cout<<"YES";exit(0);}
		}
	
	cout<<"NO";
	
	return 0;
}
	     	  									   	 	 	 	 	