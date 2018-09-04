#include<iostream>
#include<queue>
#include<set>
#include<algorithm>
#include<map>
using namespace std;

set<string> onlyA;
int An[2];
int common;

int main() {
	long long n, m;
	std::ios_base::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0;i<n;i++) {
		string str;
		cin >> str;
		onlyA.insert(str);
	}
	
	for(int i=0;i<m;i++) {
		string str;
		cin >> str;
		if(onlyA.find(str) != onlyA.end())
			common++, onlyA.erase(str);
		else An[1]++;
	}
	An[0] = onlyA.size();
	int turn = common % 2;
	while(1) {
		if(An[turn] == 0) {
			if(turn == 0) cout << "NO";
			else cout << "YES";
			return 0;
		}
		An[turn]--;
		turn = !turn;
	}
}
