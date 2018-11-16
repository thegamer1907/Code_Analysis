#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
#define ll long long
#define m_p make_pair
#define ff first
#define ss second
#define it iterator
#define p_q priority_queue
#define mm multimap
#define pb push_back
#define m_p make_pair
int a[30001];
int i = 1;
void dfs(int len[], int t) {
	for (i = 1; i <t; )
	{
		i += len[i-1];
	}
	if (i == t)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int j = 0; j < n-1; j++)
		cin >> a[j];
	dfs(a, m);
	return 0;
}
