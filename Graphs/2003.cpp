#include <bits/stdc++.h>

using namespace std;

int result = 0;

vector<int> graph[100000];

int n, m;
int cats[100000];
	
void visit(int node, int countC, int parent) {
	if(cats[node] == 0) countC = 0;
	else countC++;

if(countC > m) return;
if(graph[node].size() == 1 && parent != -1) result++;

	for(int i=0;i<graph[node].size();i++) {
		int neig = graph[node][i];
		if(neig == parent) continue;
		visit(neig, countC, node);
	}
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	
	
	cin >> n >> m;
	for(int i=0;i<n;i++) {
		cin >> cats[i];
	}
	
	for(int i=0;i<n-1;i++) {
		int da, a;
		cin >> da >> a;
		da--;a--;
		graph[da].push_back(a);
		graph[a].push_back(da);
	}
	visit(0, 0,  -1);
	cout << result;
}

