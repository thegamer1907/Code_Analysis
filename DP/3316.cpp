// KALAM
# include<bits/stdc++.h>

using namespace std;

const int N = 1000000 + 77;
char s[N];
int n , f[N] , cur , T[N];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	scanf("%s" , & s);
	n = strlen(s);
	f[0] = - 1;
	for(int i = 1;i <= n;i ++){
		cur = f[i - 1];
		while(cur > - 1 && s[i - 1] != s[cur]){
			cur = f[cur];
		}
		f[i] = cur + 1;
	}
	for(int i = 1;i < n;i ++){T[f[i]] ++;}
	cur = f[n];
	while(cur > 0 && T[cur] == 0){cur = f[cur];}
	if(cur == 0){return cout << "Just a legend\n" , 0;}
	for(int i = 0;i < cur;i ++){
		cout << s[i] ;
	}
	return 0;
}
