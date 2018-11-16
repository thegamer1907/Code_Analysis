#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<int>> V;

int main() {
	int n, t, num;
	cin >> n >> t;
	V.resize(n+1);
	for(int i=1;i<=n-1;i++) {
		cin >> num;
		V[i].push_back(i + num);
	}
	stack<int> S;
	S.push(1);
	bool vis[n+1] = {0};
	while(!S.empty()) {
		int top = S.top();
		S.pop();
		if(vis[top])
			continue;
		if(top == t) {
			cout << "YES\n";
			return 0;
		}
		vis[top] = true;
		for(int i=0;i<V[top].size();i++) {
			if(!vis[V[top][i]])
				S.push(V[top][i]);
		}
	}
	cout << "NO\n";
}