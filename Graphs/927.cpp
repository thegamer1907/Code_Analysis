#include<bits/stdc++.h>
using namespace std;


vector < long int > edge;
bool vis[100000];
void dfs(long int node,long int t) {
	if (vis[node])return;
	vis[node] = true;
	//cout<<node<<endl;
	if (node==t)
	{
	cout<<"YES";
	return;
	}
 if (node>t)
    {
    cout<<"NO";
    return;
    }

    dfs(edge[node-1],t);


}

int main()
{
long int n,t;
cin >>n;
cin >>t;

long int *tab=new long int [n];

for (long int i(1);i<n;i++)
{

cin >> tab[i];
edge.push_back(i+tab[i]);
}

dfs(1,t);


return 0;
}
