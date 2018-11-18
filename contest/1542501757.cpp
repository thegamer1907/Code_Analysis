#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MAXK 12

vector<bool> seen[200][MAXK+1];
int n;
string str[200];

void insert(int used) {
	for (int i = 0; i <= MAXK; i++) {
		seen[used][i] = vector<bool>(1<<i);
	}
}

int main() {
	cin>>n; for (int i = 0; i < 200; i++) insert(i);
	for (int i = 0; i < n; i++) {
		string inp; cin>>inp;
		for (int j = 1; j <= MAXK; j++) {
			int currnum = 0;
			for (int k = 0; k < j; k++) {
				currnum *= 2;
				currnum += inp[k]-'0';
			}
			for (int k = j; k <= inp.size(); k++) {
				seen[i][j][currnum] = true;
				currnum = currnum*2 + inp[k]-'0';
				currnum = currnum%(1<<j);
			}
		}

		str[i] = inp;
	}

	int m; cin>>m;
	for (int i = 0; i < m; i++) {
		int a, b; cin>>a>>b;
		a--;b--;
		
		for (int l = 1; l <= MAXK; l++) {
			for (int j = 0; j < (1<<l); j++) {
				seen[n][l][j] = seen[a][l][j] || seen[b][l][j];
			}
		}

		// new string at end[b]+start[a]
		string aa = str[a], bb = str[b];
		if (aa.size() > 20) aa = aa.substr(aa.size()-20, 20);
		if (bb.size() > 20) bb = bb.substr(0, 20);
		string inp = aa+bb;
		for (int j = 1; j <= MAXK; j++) {
			int currnum = 0;
			for (int k = 0; k < j; k++) {
				currnum *= 2;
				currnum += inp[k]-'0';
			}
			for (int k = j; k <= inp.size(); k++) {
				seen[n][j][currnum] = true;
				currnum = currnum*2 + inp[k]-'0';
				currnum = currnum%(1<<j);
			}
		}

		int ans = MAXK;
		for (; ans >= 1; ans--) {
			int nfound = 0;
			for (int i = 0; i < (1<<ans); i++) {
				if (seen[n][ans][i]) nfound++;
			}
			if (nfound == (1<<ans)) break;
		}
		cout<<ans<<endl;
		inp = str[a] + str[b];

		if (inp.size() > 40) {
			inp = inp.substr(0, 20) + inp.substr(inp.size()-20, 20);
		}
		str[n] = inp;
		n++;
	}
}

