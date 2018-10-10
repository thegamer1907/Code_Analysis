#include<bits/stdc++.h>
#define ll long long
#define db double
#define mib map<int, bool>
#define mii map<int, int>
#define mlb map<long long, bool>
#define vii vector<int>
#define vll vector<long long>
using namespace std;
map<string, int> a,b;
int i,j,k,l,n,m;
string v;
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i ++)
		cin >> v,
		a[v] ++;
	for(int i = 0; i < m; i ++)
	{
		cin >>v;
		a[v] ++;
		if(a[v] > 1)
			k ++;
		b[v] ++;
	}
	if(n < m || m == n && k % 2 == 0)
		cout << "NO";
	else
		cout << "YES";
}

