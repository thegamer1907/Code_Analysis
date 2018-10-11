// ITNOG
#include<bits/stdc++.h>
using namespace std;
int n,m,t;
string str;
map < string , bool > mark;
int main()
{
	ios::sync_with_stdio(false),cin.tie(0);
	cin >> n >> m ;
	for(int i=1;i<=n;i++)
		cin >> str , mark[str]=true;
	for(int i=1;i<=m;i++)
		cin >> str , t+=(mark[str]);
	if((n-t)+(t%2)>(m-t))
		cout << "YES" ;
	else
		cout << "NO" ;
	return 0;
}