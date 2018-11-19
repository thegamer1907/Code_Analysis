#include <bits/stdc++.h>

using namespace std;
typedef long long Long;
string suffix(string s, int sz){
	if(s.size() < sz)return s;
	return s.substr(s.size()-sz);
}
string prefix(string s, int sz){
	if(s.size() < sz)return s;
	return s.substr(0, sz);
}
struct BS{
	vector<set<string>> V;
	int k;
	string left, right;
	string body;
	int trim = 0;
	BS(){}
	BS(string s):left(s),right(s),body(s){
		for (int i = 1; i <= 12; ++i) {
			V.resize(i+1);
			for (int j = 0; j < (1<<i); ++j) {
				string t;
				for (int l = 0; l < i; ++l) {
					t += (j>>l)&1 ? '1' : '0';
				}
				V[i].insert(t);
			}
		}
		k = 0;
		inc(s);
	}
	BS operator+(const BS &o)const{
		BS r; 
		r.V.resize(13);
		for (int i = 1; i <= 12; ++i) {
			vector<string> v;
		    set_intersection(V[i].begin(), V[i].end(),
		                     o.V[i].begin(), o.V[i].end(),
		                     back_inserter(v));
		    r.V[i] = set<string>(v.begin(), v.end());
		}
		r.k = 0;
		while(r.V[r.k+1].size() == 0){
			r.k++;
		}
		string a = right;
		string b = o.left;
		r.inc(a+b);
		r.left  = prefix(left + o.left, 3000);
		r.right = suffix(right + o.right, 3000);
	
		return r;
	}
	void inc(string t){
		for (int j = k+1; ; ++j) {
			vector<string> test(V[j].begin(), V[j].end());
			for(string s : test){
				if(t.find(s) != string::npos)
					V[j].erase(s);
			}
			if(V[j].size() == 0)k++;
			else break;
		}
	}
};

int main(int argc, char *argv[]) {

	int N;
	cin >> N;
	vector<BS> V;
	for (int i = 0; i < N; ++i) {
		string s;
		cin >> s;
		V.push_back(BS(s));
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int a,b;
		cin >> a >> b;
//		a = rand() % V.size()+1;
//		b = rand() % V.size()+1;
		a--;b--;
		V.push_back(V[a]+V[b]);
		cout << V.back().k << endl;
	}
}
/*

0
0
1
0
1
1
0
1
0
1
1
0
1
1
1
1
1
1
1
1


 */
