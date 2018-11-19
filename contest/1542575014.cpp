#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;


const int INF = 2e9+5;

/*
    filippos
    Contest : 868
    Task : C
*/

void solve1(vvi &m){
	for(int i = 0; i < m.size(); i++)
		if(!m[i][0]){
			cout << "YES";
			return;
		}
	cout << "NO";
}

void solve2(vvi &m){
	vi f(2, 0);
	for(int i = 0; i < m.size(); i++)
		for(int j = 0; j < 2; j++)
			f[j] += m[i][j]==0;

	if(f[0] && f[1])
		cout << "YES";
	else
		cout << "NO";
}

void solve3(vvi &m){
	//master solution
	for(vi &v : m){
		bool ok = 1;
		for(int c : v)
			if(c)
				ok = 0;
		if(ok){
			cout << "YES";
			return;
		}
	}
	//count only pos
	vi singles(3, 0);
	for(vi &v : m){
		for(int i = 0; i < 3; i++)
			if(singles[i] == 0 && v[i]){
				bool ok = 1;	
				for(int j = 0; j < 3; j++)
					if(j != i && v[j])
						ok = 0;
				if(ok)
					singles[i]++;
			}
	}
	int xxx = 0;
	for(int i : singles)
		if(i)
			xxx++;
	if(xxx > 1){
		cout << "YES";
		return;
	}
	//count only !pos
	vi doubles(3, 0);
	for(vi &v : m){
		for(int i = 0; i < 3; i++)
			if(doubles[i] == 0 && !v[i]){
				bool ok = 1;	
				for(int j = 0; j < 3; j++)
					if(j != i && !v[j])
						ok = 0;
				if(ok)
					doubles[i]++;
			}
	}
	for(int i = 0; i < 3; i++)
		if(doubles[i] && singles[i]){
			cout << "YES";
			return;
		}
	cout << "NO";
}

void solve4(vvi &m){
	//master solution
	for(vi &v : m){
		bool ok = 1;
		for(int c : v)
			if(c)
				ok = 0;
		if(ok){
			cout << "YES";
			return;
		}
	}
	//count problems with just that 1
	vi singles(4, 0);
	for(vi &v : m){
		for(int i = 0; i < 4; i++)
			if(singles[i] == 0 && v[i]){
				bool ok = 1;	
				for(int j = 0; j < 4; j++)
					if(j != i && v[j])
						ok = 0;
				if(ok)
					singles[i]++;
			}
	}
	//count problems with 0 on it
	vi triples(4, 0);
	for(vi &v : m)
		for(int i = 0; i < 4; i++)
			if(triples[i] == 0 && !v[i])
				triples[i]++;

	for(int i = 0; i < 4; i++)
		if(triples[i] && singles[i]){
			cout << "YES";
			return;
		}
	vvi couples(4, vi(4, 0));
	vector<pii> mates;
	for(vi &v : m){
		if(v[0] + v[1] + v[2] + v[3] != 2)
			continue;
		for(int i = 0; i < 4; i++) if(!v[i])
			for(int j = i+1; j < 4; j++) if(!v[j]){
				couples[i][j] = couples[j][i] = 1;
				mates.push_back({i, j});
			}
	}
	int combinations = 1<<mates.size();
	for(int i = 0; i < combinations; i++){
		vi amount(4, 0);
		int size = 0;
		for(int j = 1, index = 0; j < combinations; j <<= 1, index++){
			if(i & j){
				size++;
				amount[mates[index].first]++;
				amount[mates[index].second]++;
			}
		}
		//cout << i << " -> " << size << endl;
		if(size == 0)
			continue;
		bool ok = 1;
		for(int j = 0; j < 4; j++)
			if(amount[j] < (size+1)/2)
				ok = 0;
		if(ok){
			cout << "YES";
			return;
		}
	}
	cout << "NO";

	/*
	for(int tot = 1; tot <= couples.size(); tot++){
		vi amount(4, 0);
		if(rec(couples, 0, tot,))
	}*/
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vvi m(n, vi(k));
    for(auto &x : m)
    	for(int &c : x)
    		cin >> c;
    if(k == 1)
    	solve1(m);
    else if(k == 2)
    	solve2(m);
    else if(k == 3)
    	solve3(m);
    else
    	solve4(m);
}