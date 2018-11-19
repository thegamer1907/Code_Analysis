#include "bits/stdc++.h"
using namespace std;
const int maxn = 500100;
const int bits = 10;
struct ST{
    short trie[(1<<bits) * bits][2], nd;
    string prefix, suffix;
    ST(){
        memset(trie, 0, sizeof(trie));
        nd = 1;
    }
    ST(string s){
        memset(trie, 0, sizeof(trie));
        nd = 1;
        for(int f = 0; f < s.size(); f++){
            int cur = 0;
            for(int g = 0; g < bits; g++){
                if(f + g == s.size()) break;
                short & v = trie[cur][s[f + g] - '0'];
                if(v == 0) v = nd++;
                cur = v;
            }
        }
        for(int f = 0; f < s.size(); f++) {
            if(f == bits) break;
            prefix.push_back(s[f]);
        }
        for(int c = s.size() - 1, e = 0; e < bits; e++, c--){
            if(c == -1) break;
            suffix.push_back(s[c]);
        }
        reverse(suffix.begin(), suffix.end());
    }
    void dfs(ST & a, int cura, int curto){
        for(int e = 0; e < 2; e++){
            if(!a.trie[cura][e]) continue;
            if(!trie[curto][e]) trie[curto][e] = nd++;
            dfs(a, a.trie[cura][e], trie[curto][e]);
        }
    }
    void add(ST & a, ST & b){
        dfs(a, 0, 0);
        dfs(b, 0, 0);
        string mid = a.suffix + b.prefix;
        for(int e = 0; e < mid.size(); e++){
            int cur = 0;
            for(int f = 0; f < bits; f++){
                if(f + e == mid.size()) break;
                short & v = trie[cur][mid[f + e] - '0'];
                if(v == 0) v = nd++;
                cur = v;
            }
        }
        if(a.prefix.size() < bits) prefix = a.prefix + b.prefix;
        else prefix = a.prefix;
        if(b.suffix.size() < bits) suffix = a.suffix + b.suffix;
        else suffix = b.suffix;
    }
    int get_answer(){
        queue<pair<int, int> > q;
        q.push(make_pair(0, 0));
        while(!q.empty()){
            int cur, sz;
            tie(cur, sz) = q.front(); q.pop();
            if(!trie[cur][0] || !trie[cur][1]){
                return sz;
            }
            q.push(make_pair(trie[cur][0], sz + 1));
            q.push(make_pair(trie[cur][1], sz + 1));
        }
        assert(0);
    }
};
char str[maxn];
ST to_solve[222];
int main(){
    // cout << sizeof(to_solve)/(1024.0 * 1024) << endl;
	int n;
	cin >> n;
	vector<string> res;
	vector<int> value;
	for(int e = 0; e < n; e++){
		scanf("%s", str);
		res.push_back(str);
        to_solve[e] = ST(res.back());
        // cout << to_solve[e].prefix << " " << to_solve[e].suffix << endl;
	}
	int m;
	cin >> m;
	for(int e = 0; e < m; e++){
		int a, b;
		scanf("%d %d", &a, &b);
		a--; b--;
        to_solve[n + e].add(to_solve[a], to_solve[b]);
        // cout << to_solve[n + e].prefix << " " << to_solve[n + e].suffix << endl;
        cout << to_solve[n + e].get_answer() << endl;
	}
    return 0;
}
