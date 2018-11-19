#include <bits/stdc++.h>
using namespace std;

string s[205];
string fi[205], la[205];
bool dp[201][13][1<<12];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> s[i];
		fi[i] = la[i] = s[i];

		for(int j=1;j<=12;j++){
			if(j <= s[i].size()){
				int val = 0;
				for(int k=0;k<j;k++){
					if(s[i][k] == '1') val += (1<<k);
				}
				dp[i][j][val] = 1;
				for(int k=j;k<s[i].size();k++){
					if(s[i][k-j] == '1') val--;
					val /= 2;
					if(s[i][k] == '1') val += (1<<(j-1));
					dp[i][j][val] = 1;
				}
			}
		}

		if(fi[i].size() > 20) fi[i] = fi[i].substr(0, 20);
		if(la[i].size() > 20) la[i] = la[i].substr(la[i].size()-20, 20);
	}
	int m;
	cin >> m;
	for(int i=1;i<=m;i++){
		int a, b;
		cin >> a >> b;

		n++;
		if(fi[a].size() < 20){
			fi[n] = fi[a] + fi[b];
		}
		else{
			fi[n] = fi[a];
		}

		if(la[b].size() < 20){
			la[n] = la[a] + la[b];
		}
		else{
			la[n] = la[b];
		}

		string mid = la[a] + fi[b];

		int ans = 0;
		for(int j=1;j<=12;j++){
			if(j <= fi[n].size()){
				int val = 0;
				for(int k=0;k<j;k++){
					if(fi[n][k] == '1') val += (1<<k);
				}
				dp[n][j][val] = 1;
				for(int k=j;k<fi[n].size();k++){
					if(fi[n][k-j] == '1') val--;
					val /= 2;
					if(fi[n][k] == '1') val += (1<<(j-1));
					dp[n][j][val] = 1;
				}
			}
			if(j <= la[n].size()){
				int val = 0;
				for(int k=0;k<j;k++){
					if(la[n][k] == '1') val += (1<<k);
				}
				dp[n][j][val] = 1;
				for(int k=j;k<la[n].size();k++){
					if(la[n][k-j] == '1') val--;
					val /= 2;
					if(la[n][k] == '1') val += (1<<(j-1));
					dp[n][j][val] = 1;
				}
			}
			if(j <= mid.size()){
				int val = 0;
				for(int k=0;k<j;k++){
					if(mid[k] == '1') val += (1<<k);
				}
				dp[n][j][val] = 1;
				for(int k=j;k<mid.size();k++){
					if(mid[k-j] == '1') val--;
					val /= 2;
					if(mid[k] == '1') val += (1<<(j-1));
					dp[n][j][val] = 1;
				}
			}

			bool ok = 1;
			for(int k=0;k<(1<<j);k++){
				dp[n][j][k] |= dp[a][j][k];
				dp[n][j][k] |= dp[b][j][k];
				if(!dp[n][j][k]) ok = 0;
			}
			if(ok) ans = max(ans, j);
		}

		printf("%d\n", ans);

		if(fi[n].size() > 20) fi[n] = fi[n].substr(0, 20);
		if(la[n].size() > 20) la[n] = la[n].substr(la[n].size()-20, 20);

	}
}