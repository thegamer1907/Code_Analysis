#include <iostream>
#include <queue>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>		 
#include <utility>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <set>
#include <cstdio>
#include <stack>
#include <map>	  
#include <cstdio>
#include <cassert>
#include <ctime>
#include <cstring>
using namespace std;

#define pause system("pause")

#define input ios_base::sync_with_stdio(0)
//#define int long long

typedef  long long ll;
typedef  unsigned long long	ull;
typedef  pair<long long, long long> pll;
typedef  pair<int, int> pii;


int h, m, s, t1, t2;
double sd, md, hd;
bool down;

bool check(int a, int b)
{
	if ((hd <= a && hd <= b) || hd >= a && hd >= b)
	{
		if ((sd <= a && sd <= b) || (sd >= a && sd >= b))
		{
			if ((md <= a && md <= b) || (md >= a && md >= b))
			{
				return 1;
			}
		}
	}
	else
	{
		if ((sd <= a && sd >= b) || (sd >= a && sd <= b))
		{
			if ((md <= a && md >= b) || (md >= a && md <= b))
			{
				return 1;
			}
		}
	}
	return 0;
}


int main()
{
	input;
	down = 1;
	cin >> h >> m >> s >> t1 >> t2;
	
	sd = (double)s / 5.0;
	md = (double)m / 5.0 + sd / 60.0;
	hd = (double)h + md / 60.0 + sd / 3600.0;
	if (check(t1, t2))
	{
		cout << "YES";
	}
	else cout << "NO";

	return 0;
}