#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v(100000);

bool dfs(int i, int t)
{
	for(int j : v[i])
	{
		if(j == t)
			return true;
		return dfs(j, t);
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int t;
	cin>>t;
	int x;
	for(int i = 1; i<n; i++)
	{
		cin>>x;
		v[i].push_back(i+x);
	}
	bool res = dfs(1, t);
	if(res)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
