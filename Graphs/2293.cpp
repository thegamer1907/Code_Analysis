#include <bits/stdc++.h>
#define MAXN 505
typedef long long ll;

using namespace std;

int n;
vector<int> c[2020];

int dfs(int x){
	int t = 0;
	for(int i = 0; i < c[x].size(); i++){
		t = max(t, dfs(c[x][i]) + 1);
	}
	t = max(t, 1);
	return t;
}

int main(){
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++){
    	int t;
    	cin >> t;
    	if(t == -1) t++;
    	c[t].push_back(i + 1);
    }
    int h = dfs(0);
    cout << h - 1;
}
