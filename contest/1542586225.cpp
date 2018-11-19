#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <utility>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#define Pair pair<int,int>
#define LOWBIT(x) x & (-x)
#define LL long long
#define mp make_pair
#define pb push_back
#define x first
#define y second
using namespace std;

const int MOD=1e9+7;
const int INF=0x7ffffff;
const int magic=348;
const double eps=1e-9;

string s;
int n;
string ss[200];

int main ()
{
	ios::sync_with_stdio(false);
	int i,j;
	cin>>s>>n;
	char c1[5],c2[5];
	for (i=1;i<=n;i++) cin>>ss[i];
	for (i=1;i<=n;i++)
	{
		if (ss[i]==s)
		{
			printf("YES\n");
			return 0;
		}
	}
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			c1[0]=ss[i][1];
			c2[0]=ss[j][0];
			if (c1[0]==s[0] && c2[0]==s[1])
			{
				printf("YES\n");
				return 0;
			}
		}
	printf("NO\n");
	return 0;
}