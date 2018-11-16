#define _CRT_SECURE_NO_WARNINGS
#define INF 100000000

#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int  main()
{
	int n, k,j;
	int i;
	
	scanf("%d%d", &n, &k);
	vector <vector <int > > v(n + 1);
	vector <bool> used(n + 1, false);
	vector <int> l(n + 1, INF);
	vector <int> a(n);
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d", &a.at(i));
		v[i + 1].push_back(a.at(i)+i+1);
	}
	int Lmin = INF;
	i = 1;
	int to, w;
	l[i] = 0;
	queue <int> q;
	used[1] = true;
	q.push(1);
	while (!q.empty())
	{
		int o = q.front();
		q.pop();
		for (i = 0; i < v[o].size(); i++)
		{
			int to = v[o][i];
			{
				if (!used[to])
				{
					used.at(to) = true;
					q.push(to);
				}
			}
		}
	}
	if (!used.at(k))
	{
		cout << "No";
	}
	else cout << "Yes";
	


}