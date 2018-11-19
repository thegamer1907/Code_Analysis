#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<memory.h>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<set>
#include<cmath>
#include<stdio.h>
#include<map>
#include<stack>
#include<cctype>
#include<sstream>
#include<set>
#include<fstream>
#include<cstring>
#define os(a) memset(a, -1, sizeof a)
#define zeros(a) memset(a, 0, sizeof a)
#define oo 1 << 30
#define noo -1 << 31
#define nloo -1int << 63
#define loo 1int << 62
#define all(a) (a).begin(), (a).end()

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

int n;

int main()
{
	
	string s, ss = "";
	string a;
	cin >> s;
	cin >> n;
	bool first = false, second = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a[1] == s[0])
		{
			first = true;
		}

		if (a[0] == s[1])
		{
			second = true;
		}

		if (a == s)
		{
			first = true;
			second = true;
		}
	}

	if (first && second)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}