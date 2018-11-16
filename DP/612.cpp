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

int num[100010];

int main()
{
	string s;
	cin >> s;
	for (int i = 1; i < s.length(); i++)
	{
		num[i] = num[i - 1];
		if (s[i] == s[i - 1])
			num[i]++;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << num[b - 1] - num[a - 1] << endl;
	}
	return 0;
}