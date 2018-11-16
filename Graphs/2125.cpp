#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<string>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<fstream>
#include<cstdio>
#include<cstring>
using namespace std;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) ((int)v.size())
#define repi(n)  for(int i = 0; i < (int)(n); ++i)
#define repj(n)  for(int j = 0; j < (int)(n); ++j)
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define reprng(i,a,b) for(int i = a; i <= (int)(b); ++i)
#define reprngr(i,n,a) for(int i = n;i >= (int)(a); --i)
#define For(it,c) for(auto  it=c.begin();it!=c.end();++it)
#define log2(n) (log10((long double)n) / log10((long double)2))
#define logb(b, n) (log10((long double)n) / log10((long double)b))
#define swap(a,b) a = a + b, b = a - b, a = a - b
#define mp make_pair
typedef long long ll;
const int OO = 0x3f3f3f3f;

void bfs(vector<int> &dest, vector< vector<int> > &adj, int source)
{
	queue<int> visit;
	visit.push(source);
	dest[source] = 0;
	while (!visit.empty())
	{
		int current = visit.front();
		visit.pop();

		for (int adjacent : adj[current])
		{
			if (dest[adjacent] == OO)
			{
				dest[adjacent] = dest[current] + 1;
				visit.push(adjacent);
			}
		}


	}
}


int main()
{


	ifstream in("input.txt");
	ofstream out("output.txt");
	int n, m;
	cin >> n >> m;
	if (n >= m)
		cout << n - m << endl;
	else
	{
		vector< vector<int> > adj(2 * m + 1);
		vector<int> dest(2 * m + 1, OO);
		repi(m)
		{
			adj[i + 2].push_back(i + 1);
			adj[(i + 1)].push_back((i + 1) * 2);
		}
		bfs(dest, adj, n);
		cout << dest[m] << endl;
	}


	return 0;
}