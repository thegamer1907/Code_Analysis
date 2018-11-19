#include <set>
#include <numeric>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <sstream>
#include <map>
#include <functional>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
#define REP(idx1,num1) for(int idx1=0;idx1<(num1);idx1++)
#define pb push_back
#define empb emplace_back
#define mp make_pair
#define mem(s) memset(s,0,sizeof(s));
const double EPS = 1e-6;
//const int maxn = 280;
int main()
{
	char a,b;
	cin >> a >> b;
	int n;
	cin >> n;
	bool flag1 = false;bool flag2 = false;bool flag3 = false;
	while(n--){
		char c,d;
		cin >> c >> d;
		if(a == c && b == d)
			flag1 = true;
		if(d == a)
			flag2 = true;
		if(c == b)
			flag3 = true;
	}
	if(flag1 ||(flag2 && flag3))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

