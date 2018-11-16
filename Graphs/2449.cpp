#include<iostream>
#include<vector>
using namespace std;
int otv=0;
vector< vector<int> > list;
vector<bool> flag;
vector<int> c;
dfs(int point, int color)
{
	flag[point]=true;
	if(c[point]!=color)
		otv++;
	for(int i=0; i<list[point].size(); i++)
		if(!flag[list[point][i]])
		dfs(list[point][i], c[point]);
}
int main()
{
	int n;
	cin>>n;	
	list=vector< vector<int> >(n);
	flag=vector<bool>(n, false);
	int p;
	for(int i=1; i<n; i++)
	{
		cin>>p;
		p--;
		list[i].push_back(p);
		list[p].push_back(i);
	}
	c=vector<int> (n);
	for(int i=0; i<n; i++)
	cin>>c[i];
	dfs(0, -1);
	cout<<otv;
	return 0;
}

