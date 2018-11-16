#include<bits/stdc++.h>
using namespace std;

std::vector<int> a[100034];
std::vector<int> c[100034];

int main(){
	int n, m;
	cin >> n >> m;
	int c1[n];
	for(int i = 1; i <= n; i++){
		cin >> c1[i];
		c[c1[i]].push_back(i);
	}
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	int fl = 0;
	int max_ans = 0;
	int max_color = 0;
	for(int i = 0; i <= 100000; i++){
		map<int, int> flag;
		int ans = 0;
		for(int j = 0; j < c[i].size(); j++){
			int v = c[i][j];
			for(int k = 0; k < a[v].size(); k++){
				int u = a[v][k];
				if(c1[u] != i && flag[c1[u]] == 0){
					ans++;
					flag[c1[u]] = 1;
				}
			}
		}
		if(ans > max_ans && c[i].size() > 0){
			fl = 1;
			max_ans = ans;
			max_color = i;
		}
		else if(fl == 0 && ans == max_ans && c[i].size() > 0){
			fl = 1;
			ans = max_ans;
			max_color = i;
		}
	}
	cout << max_color << "\n";
	return 0;
}