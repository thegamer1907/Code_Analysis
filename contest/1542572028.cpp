//Mitesh Agrawal
#include <bits/stdc++.h>
using namespace std;

#define M 10ll
#define ll long long

string s[205];
string st[205];
string en[205];
bool poss[205][M + 1][1 << (M + 1)];

int main(){
	ll i,j,k,l,temp,n,m,a,b;
	scanf("%lld", &n);
	for(i = 1; i <= n; i++){
		cin >> s[i];
		l = s[i].size();
		for(j = 1; j <= M; j++){
			if(s[i].size() < j)
				break;
			temp = 0;
			for(k = 0; k < j; k++){
				temp = 2 * temp + (s[i][k] - '0');
			}
			poss[i][j][temp] = 1;
			// printf("%lld %lld %lld\n", i, j, temp);
			for(k = j; k < l; k++){
				temp %= (1 << (j - 1));
				temp = 2 * temp + (s[i][k] - '0');
				// printf("%lld %lld %lld\n", i, j, temp);
				poss[i][j][temp] = 1;
			}
		}
		// printf("\n");
		st[i] = s[i].substr(0, min(M, l));
		en[i] = s[i].substr(l - min(M, l), min(M, l));
		// cout << st[i] << " " << en[i] << endl;
	}
	scanf("%lld", &m);
	for(i = n + 1; i <= n + m; i++){
		scanf("%lld %lld", &a, &b);
		for(j = 1; j <= M; j++)
			for(k = 0; k < (1 << j); k++)
				poss[i][j][k] = (poss[a][j][k] | poss[b][j][k]);
		s[i] = en[a] + st[b];
		l = s[i].size();
		for(j = 1; j <= M; j++){
			if(s[i].size() < j)
				break;
			temp = 0;
			for(k = 0; k < j; k++){
				temp = 2 * temp + (s[i][k] - '0');
			}
			poss[i][j][temp] = 1;
			// printf("%lld %lld %lld\n", i, j, temp);
			for(k = j; k < l; k++){
				temp %= (1 << (j - 1));
				temp = 2 * temp + (s[i][k] - '0');
				// printf("%lld %lld %lld\n", i, j, temp);
				poss[i][j][temp] = 1;
			}
		}
		// printf("\n");

		bool flag1 = false;
		for(j = M; j >= 1; j--){
			bool flag = true;
			for(k = 0; k < (1 << j); k++){
				if(!poss[i][j][k]){
					flag = false;
					break;
				}
			}
			if(flag){
				printf("%lld\n", j);
				flag1 = true;
				break;
			}
		}
		if(!flag1){
			printf("0\n");
		}

		s[i] = (st[a] + st[b]);
		l = s[i].size();
		st[i] = s[i].substr(0, min(M, l));

		s[i] = (en[a] + en[b]);
		l = s[i].size();
		en[i] = (en[a] + en[b]).substr(l - min(M, l), min(M, l));
		// cout << st[i] << " " << en[i] << endl;
	}


    return 0;
}