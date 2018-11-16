#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> >v;
vector<int>cat;
vector<bool>done;
int m,otv=0;
void rec(int x,int kot)
{
	if(kot<=m)
	{
	int f=0;
	for(int i=0;i<v[x].size();i++)
	if(!done[v[x][i]])
	{
		done[v[x][i]]=true;
		if(cat[v[x][i]]==1)
		rec(v[x][i],kot+1);
		else
		if(cat[v[x][i]]==0)
		rec(v[x][i],0);
		done[v[x][i]]=false;
		f=1;
	}
	if(f==0)
	otv++;
	}
}
int main()
{
	int n,x,y;
	cin>>n>>m;
	v.resize(n);
	cat.resize(n);
	done.resize(n,false);
	done[0]=true;
	for(int i=0;i<n;i++)
	cin>>cat[i];
	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		v[x-1].push_back(y-1);
		v[y-1].push_back(x-1);
	}
	if(cat[0]==0)
	rec(0,0);
	else
	rec(0,1);
	cout<<otv;
	return 0;
}