#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int32_t MAX_N = 1e5;

class Graph {
private:
	class Node {
	public:
		bool isVisited;
		int32_t id;
		vector< Node* > v;
	
		void Init(int32_t id = 0) {
			this->id = id;
			
			isVisited = false;
			v.clear();
		}
	};

public:
	int32_t cntNodes;
	Node nodes[MAX_N + 5];

	void Init(int32_t n) {
		cntNodes = n;

		for(int32_t i = 1; i <= n; i++) {
			nodes[i].Init(i);
		}
	}

	void AddEdge(int32_t x, int32_t y) {
		nodes[x].v.push_back(&nodes[y]);
		nodes[y].v.push_back(&nodes[x]);
	}

	bool HasCycle(Node *nd) {
		nd->isVisited = true;

		int32_t cnt = 0;
		bool hasCycle = false;
		for(auto &x : nd->v) {
			if(x->isVisited) {
				cnt++;
			}
			else {
				hasCycle = (hasCycle | HasCycle(x));
			}
		}

		if(cnt > 1) {
			hasCycle = true;
		}

		return hasCycle;
	}

	int32_t Solve() {
		int32_t ans = 0;
	
		for(int32_t i = 1; i <= cntNodes; i++) {
			if(!nodes[i].isVisited) {
				if(!HasCycle(&nodes[i])) {
					ans++;
				}
			}
		}

		return ans;
	}
};

Graph g;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int32_t n, m;
	cin >> n >> m;
	
	g.Init(n);
	for(int32_t i = 0; i < m; i++) {
		int32_t x, y;
		cin >> x >> y;

		g.AddEdge(x, y);
	}

	cout << g.Solve() << endl;
}

