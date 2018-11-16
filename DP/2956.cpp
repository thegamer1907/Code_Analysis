#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <deque>
#include <vector>
#include <functional>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int INF = 2e9+5;

/*
	filippos
	Contest : 676
	Task : C
*/

void print(vi &v){
	for(int i : v)
		cout << i << ' ';
	cout << '\n';
}

int main(){
	cin.tie(0), cin.sync_with_stdio(0);
	
	int n, k; cin >> n >> k;
	string s; cin >> s;

	auto solve = [&](char ok){
		int best = 0, curr = 0;
		auto rem = [&](int i){
			curr -= s[i] != ok;
		};
		auto add = [&](int i){
			curr += s[i] != ok;
		};

		add(0);
		for(int l = 0, r = 0; l < s.size(); l++){
			if(l > r) add(l), r++;
			while(r + 1 < s.size() && curr + (s[r+1] != ok) <= k) add(++r);
			best = max(best, r - l + 1);
			rem(l);
		}
		return best;
	};

	cout << max(solve('a'), solve('b'));
}