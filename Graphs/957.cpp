#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cctype>
#include<vector>
#include<ctime>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<algorithm>
#include<functional>
#include<sstream>

#define MAX 100000000000000
#define max(a,b) (a)<(b)?(b):(a)
#define min(a,b) (a)>(b)?(b):(a)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
	int n, m;
	cin >> n >> m;
	int pos = 1;
	for (int i = 0; i < n - 1; i++)
	{
		int x;
		cin >> x;
		if (i + 1 == pos)
		{
			pos += x;
			if (pos == m)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}