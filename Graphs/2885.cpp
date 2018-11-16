#include <algorithm>
#include <iostream>
#include <stack>
#include <tuple>
#include <vector>
using namespace std;

class SCC {
    public:
        SCC(int _n) : n(_n), e(n), I(n, -1), scc(n, -1) {}

        void add_edge(int u, int v) {
            e[u].push_back(v);
        }

        // Returns vector A where A[i] = root of SCC of i
        vector<int> get_scc() {
            for (int v = 0; v < n; v++)
                if (I[v] == -1)
                    dfs(v);
            return scc;
        }

        /*
        void dfs(int x) {
            stack<pair<int, vector<int>::iterator>> r;
            r.emplace(x, e[x].begin());
            while (!r.empty()) {
                int v;
                vector<int>::iterator it;
                tie(v, it) = r.top();
                r.pop();

                if (it == e[v].begin()) {
                    s.push(v);
                    I[v] = s.size();
                    b.push(I[v]);
                }

                bool done = true;
                while (it != e[v].end()) {
                    int w = *it;
                    ++it;
                    if (I[w] == -1) {
                        r.emplace(v, it);
                        r.emplace(w, e[w].begin());
                        done = false;
                        break;
                    } else {
                        while (I[w] < b.top())
                            b.pop();
                    }
                }
                if (done && I[v] == b.top()) {
                    b.pop();
                    while (I[v] <= (int)s.size()) {
                        scc[s.top()] = v;
                        s.pop();
                    }
                }
            }
        }
        */

        void dfs(int v) {
            s.push(v);
            const int iv = s.size();
            I[v] = iv;
            b.push(iv);
            for (auto w : e[v]) {
                const int iw = I[w];
                if (iw == -1)
                    dfs(w);
                else if (scc[w] == -1)
                    while (iw < b.top())
                        b.pop();
            }
            if (iv == b.top()) {
                b.pop();
                while (iv <= (int)s.size()) {
                    scc[s.top()] = v;
                    s.pop();
                }
            }
        }

        /*
		void dfs(int v) {
            static int c = 0;
			I[v] = c++;
			s.push(v);
			b.push(v);
			for (auto w : e[v]) {
				const int iw = I[w];
				if (iw == -1)
					dfs(w);
				else if (scc[w] == -1)
					while (iw < I[b.top()])
						b.pop();
			}
			if (v == b.top()) {
				b.pop();
				while (s.top() != v) {
					scc[s.top()] = v;
					s.pop();
				}
				scc[v] = v;
				s.pop();
			}
		}
        */

    private:
        int n;
        vector<vector<int>> e;
        vector<int> I, scc;
        stack<int> s, b;
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, u, v;
    cin >> n;
    vector<int> costs(n);
    for (int i = 0; i < n; i++)
        cin >> costs[i];

    SCC scc_solve(n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        scc_solve.add_edge(u-1, v-1);
    }

    vector<int> scc_assign = scc_solve.get_scc();

    vector<int> scc_cost(n, -1);
    vector<int> scc_min_num(n);

    for (int i = 0; i < n; i++) {
        int scc = scc_assign[i];
        if (scc_cost[scc] == -1 || costs[i] < scc_cost[scc]) {
            scc_cost[scc] = costs[i];
            scc_min_num[scc] = 1;
        } else if (costs[i] == scc_cost[scc])
            scc_min_num[scc]++;
    }

    long long min_cost = 0;
    long long ways = 1;

    for (int i = 0; i < n; i++) {
        if (scc_cost[i] >= 0) {
            min_cost += scc_cost[i];
            ways = (ways * scc_min_num[i]) % 1000000007;
        }
    }

    cout << min_cost << " " << ways << endl;

    return 0;
}
