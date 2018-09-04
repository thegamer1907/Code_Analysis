#include <bits/stdc++.h>
#define N 1000005
#define int long long
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int n, m, k, A, B;

string s;

vector<int> all;

queue<int> bfs;

int sum(int x)
{
	int qtd = 0;

	while(x > 0)
	{
		qtd += (x%10);

		x /= 10;
	}

	return qtd;
}

int32_t main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	cin>>k;

	for(int p = 1; p <= 9; p++) bfs.push(p);

	while(!bfs.empty())
	{
		int x = bfs.front();

		bfs.pop();

		if(all.size() > 30000) break;

		int s = sum(x);

		if(s == 10) all.push_back(x);

		if(s > 10) continue;

		for(int p = 0; p <= 9; p++)
		{
			bfs.push(x*10 + p);
		}
	}

	sort(all.begin(), all.end());

	cout<<all[k - 1]<<"\n";
}