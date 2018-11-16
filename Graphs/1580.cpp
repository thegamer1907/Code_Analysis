#include <bits/stdc++.h>

using namespace std;
int *v = NULL;
int N,K;

bool dfs(int n){
	if(n == K)return true;
	if(n > K)return false;
	return dfs(n + v[n]);
}

int main(){
	cin >> N >> K;
	v = new int[N + 2];
	for(int i = 1; i <= N; i++){
		cin >> v[i];
	}
	if(dfs(1)){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
}
