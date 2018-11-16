#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > gr(100500);
vector<int> K(100500);
vector<bool> used(100500, false);
int m, ans = 0;

void dfs(int v,int cats)
{
	used[v] = true;
	bool was = false;
	for(int i=0;i<gr[v].size();++i)
	{
		int to = gr[v][i];
		if(!used[to])
		{
			was = true;
			int newcats = cats;
			if(K[to]) newcats++;
			else newcats = 0;
			if(newcats<=m)
				dfs(to,newcats);
		}
	}
	if(!was)
		++ans;
}

int main(){
	int n = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> K[i];
	}
	for(int i = 1; i < n ; i++){
		int a , b;
		cin >> a >> b;
		gr[a].push_back(b);
		gr[b].push_back(a);

	}
	dfs(1, K[1]);
	cout << ans;
	
	return 0;
}
