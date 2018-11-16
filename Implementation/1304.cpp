#include <bits/stdc++.h>

#pragma GCC optimize("O3")

#define INF 1000000000
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define FORC(cont, it) for(decltype((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define PB push_back
#define F first
#define S second
#define MP make_pair

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int main() {
	char queue[50];
	int n,t;

	scanf("%d %d\n",&n,&t);
	for (int i = 0; i < n; ++i)
	{
		scanf("%c",&queue[i]);
	}
	for (int j = 0; j < t; ++j)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			if (queue[i]=='B'&&queue[i+1]=='G')
			{
				queue[i++]='G';
				queue[i]='B';
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%c", queue[i]);
	}
	return 0;
}