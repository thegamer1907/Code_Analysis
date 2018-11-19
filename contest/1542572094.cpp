#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<unordered_set>
#include<string>

using namespace std;
typedef long long ll;
vector<string> T[10];
unordered_set<string> substr[202];

string word[202];

int n;

void solve(int x) {
	for(int i=1; i<10; i++) {
		for(int j=0; j<T[i].size(); j++) {
			if(substr[x].find(T[i][j])==substr[x].end()) {
				cout << i-1 << endl;
				return;
			}
		}
	}
	cout << 9 << endl;
}

int main()
{
 	T[1].push_back("0");
 	T[1].push_back("1");
 	for(int i=1; i<10; i++) {
 		for(int j=0; j<T[i-1].size(); j++) {
 			T[i].push_back(T[i-1][j] + "1");
 			T[i].push_back(T[i-1][j] + "0");
 		}
 	}
 	
 	cin >> n;
 	for(int i=1; i<=n; i++) {
 		string s;
 		cin >> s;
 		word[i] = s;
 		for(int j=0; j<10; j++) {
 			for(int k=0; k<T[j].size(); k++) {
 				if(s.find(T[j][k])!=string::npos) {
 					substr[i].insert(T[j][k]);
 				}
 			}
 		}
 	}
 	
 	int m;
 	cin >> m;
 	for(int i=n+1; i<=m+n; i++) {
 		int a, b;
 		cin >> a >> b;
 		word[i] = word[a] + word[b];
 		for(int j=0; j<10; j++) {
 			for(int k=0; k<T[j].size(); k++) {
 				if(word[i].find(T[j][k])!=string::npos or substr[a].find(T[j][k])!=substr[a].end() or substr[b].find(T[j][k])!=substr[b].end()) {
 					substr[i].insert(T[j][k]);
 				}
 			}
 		}
 		if(word[i].length() > 20) {
 			word[i] = word[i].substr(0, 10) + "." + word[i].substr(word[i].length() - 10);
 		}
 		solve(i);
 	}
}

