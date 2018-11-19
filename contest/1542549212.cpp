#include<bits/stdc++.h>
#define ll long long
#define MX 202
using namespace std;
string arr[MX];
int res[MX];

int solve(string s, int N){
	int ret = N;
	//cout<<s<<endl;
	for(int l = N + 1; l <= 10; l++){
		int flg = 0;
		for(int i = 0; i < (1 << l); i++){
			string ch = "";
			for(int j = 0; j < l; j++){
				if( i & (1 << j) ){
					ch = "1" + ch;
				} else{
					ch = "0" + ch;
				}
			}
			int p = s.find(ch);
			if(p < 0){
				flg = 1; break;
			}
		}
		if(!flg) ret = l;
		else break;
	}
	return ret;
}

int main(){
	int N; scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		cin>>arr[i];
		res[i] = solve(arr[i], 0);
	}
	int m; scanf("%d", &m);
	while(m--){
		int a, b;
		scanf("%d%d", &a, &b);
		arr[++N] = arr[a] + arr[b];
		int len = arr[N].size();
		if(len > 1000) arr[N] = arr[N].substr(0, 500) + arr[N].substr(len - 500, 500);
		res[N] = solve(arr[N], max(res[a], res[b]));
		printf("%d\n", res[N]);
	}
return 0;
}