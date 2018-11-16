#include <bits/stdc++.h>
#include<set>
#include<vector>
#define pb push_back
using namespace std;

vector<vector<int>> matrix;
vector<int> skipthis;

int DFS(int v) {
	int maxCountChild = 0;
	for (int i = 0; i < matrix[v].size(); ++i) 
	{
		maxCountChild = max(maxCountChild, DFS(matrix[v][i]));
	}
	return 1+maxCountChild;
}

int main() {
 ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m = 0, temp = 0, count=0;

	cin>>count;

	++count;

	matrix.resize(count);

	for (int i = 1; i < count; i++)
	{
		cin>>temp;
		if (temp == -1) {
			skipthis.push_back(i);
			continue;
		}
		matrix[temp].push_back(i);
	}
	for (int i = 0; i < skipthis.size(); ++i)
	{
		m = max(m, DFS(skipthis[i]));
	}
	cout<<m;
}
