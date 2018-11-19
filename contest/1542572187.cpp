#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+5;

int n , m , a , b;
int vis[302][13][1 << 12] , cnt[302][13] , siz[302];
string s[302] , pref[302] , suf[302];

void process(int i){
	for(int j = 0;j < siz[i];j++){
		int x = 0;
		for(int l = j;l < min((int)siz[i] , j + 12);l++){
			x <<= 1;
			if(s[i][l] == '1')x |= 1;
			if(!vis[i][l - j + 1][x]){
				vis[i][l - j + 1][x] = 1;
				cnt[i][l - j + 1]++;
			}
		}
	}
}

void merge(int a , int b , int i){
	for(int j = 1;j <= 12;j++){
		for(int l = 0;l < (1 << j);l++){
			if(vis[a][j][l] or vis[b][j][l]){
				vis[i][j][l] = 1;
				cnt[i][j]++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>s[i];
		siz[i] = s[i].size();
		if(siz[i] <= 12){
			pref[i] = s[i];
			suf[i] = s[i];
		}
		else {
			pref[i] = s[i].substr(0 , 12);
			suf[i] = s[i].substr(siz[i] - 12 , 12);
		}
		process(i);
	}
	cin>>m;
	int ind = n;
	while(m--){
		ind++;
		cin>>a>>b;
		s[ind] = suf[a] + pref[b];
		siz[ind] = s[ind].size();
		merge(a , b , ind);
		process(ind);
		pref[ind] = (pref[a] + pref[b]).substr(0 , min((int)(pref[a].size() + pref[b].size()) , 12));
		suf[ind] = suf[a] + suf[b];
		if(suf[ind].size() > 12)suf[ind] = suf[ind].substr(suf[ind].size() - 12 , 12);
		int i = 1;
		while(cnt[ind][i] >= (1 << i))i++;
		printf("%d\n" , i - 1);
	}
}
