//Mitesh Agrawal
#include <bits/stdc++.h>
using namespace std;

#define M 10ll
#define ll long long

string s[205];
string st[205];
string en[205];
bool poss[205][M + 1][1 << (M + 1)];

void make(ll i){
	ll l,j,k,temp;
	l = s[i].size();
	for(j = 1; j <= M; j++){
		if(s[i].size() < j)
			break;
		temp = 0;
		for(k = 0; k < j; k++){
			temp = 2 * temp + (s[i][k] - '0');
		}
		poss[i][j][temp] = 1;
		for(k = j; k < l; k++){
			temp %= (1 << (j - 1));
			temp = 2 * temp + (s[i][k] - '0');
			poss[i][j][temp] = 1;
		}
	}
}

int get(int i){
	int j,k;
	for(j = M; j >= 1; j--){
		bool flag = true;
		for(k = 0; k < (1 << j); k++)
			if(!poss[i][j][k]){
				flag = false;
				break;
			}
		if(flag)
			return j;
	}
	return 0;
}

string get_first(string s){
	ll l = s.size();
	return s.substr(0, min(M, l));
}

string get_last(string s){
	ll l = s.size();
	return s.substr(l - min(M, l), min(M, l));
}

int main(){
	ll i,j,k,l,n,m,a,b;
	scanf("%lld", &n);
	for(i = 1; i <= n; i++){
		cin >> s[i];
		make(i);
		st[i] = get_first(s[i]);
		en[i] = get_last(s[i]);
	}
	scanf("%lld", &m);
	for(i = n + 1; i <= n + m; i++){
		scanf("%lld %lld", &a, &b);
		for(j = 1; j <= M; j++)
			for(k = 0; k < (1 << j); k++)
				poss[i][j][k] = (poss[a][j][k] | poss[b][j][k]);
		s[i] = en[a] + st[b];
		make(i);
		printf("%d\n", get(i));
		st[i] = get_first(st[a] + st[b]);
		en[i] = get_last(en[a] + en[b]);
	}
    return 0;
}