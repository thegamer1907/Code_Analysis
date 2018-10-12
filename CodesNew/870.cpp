#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#define sd(n) scanf("%d",&n) == 0
#define sl(n) scanf("%I64d",&n) == 0
#define ss(n) scanf("%s",n) == 0
#define sc(n) scanf(" %c",&n) == 0

#define pd(x) printf("%d", x)
#define ps(x) printf("%s", x)
#define pl(x) printf("%I64d", x)

#define rep(i, begin, end) for (decltype(begin) i = begin; i < end; i++)
#define revrep(i, begin, end) for (decltype(begin) i = end - 1; i >= begin; i--)
#define all(a) a.begin(), a.end()


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int, int> pii;

vector<string> p;
vector<string> e;
vector<string> said;
map<string, int> mp;
map<string, int> me;

int main() {
	int n, m;
	sd(n), sd(m);

	string s;
	rep(i, 0, n) {
		cin >> s;
		p.emplace_back(s);
		mp[s] = 1;
	}
	rep(i, 0, m) {
		cin >> s;
		e.emplace_back(s);
		me[s] = 1;
	}
	int qwe = mp["a"];

	sort(all(p), [](string a, string b) {
		return me[a] > me[b];
	});
	sort(all(e), [](string a, string b) {
		return mp[a] > mp[b];
	});

	int i = 0, j = 0;
	bool turn = 1;

	while (true)
	{
		if (turn) {
			while (i < p.size() && find(all(said), p[i]) != said.end()) i++;
			if (i < p.size()) said.push_back(p[i]);
			i++;
		}
		else {
			while (j < e.size() && find(all(said), e[j]) != said.end()) j++;
			if (j < e.size()) said.push_back(e[j]);
			j++;
		}
		turn = !turn;
		if (i > p.size()) ps("NO");
		if (j > e.size()) ps("YES");
		if (j > e.size() || i > p.size()) break;
	}
}