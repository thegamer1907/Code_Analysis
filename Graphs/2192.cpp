#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
int n;
int a[1000000];
int mark[100000];
int t=0;
void DFS(int s){
	t = t + 1;
	if(mark[s] == 0){
		mark[s] = 1;
	}
	if(a[s] == -1){
		return;
	}
	if(mark[a[s]] == 0){
		DFS(a[s]);
	}
	return;
}
int main(){
	cin >> n;
	for(int i=1 ; i <= n ;i++){
	cin >> a[i];
	}
	int max = -1;
	for(int i=1 ; i <= n ;i++){
		DFS(i);
		if(t > max){
			max = t;
		}
		t = 0;
		for(int i=1 ; i <= n ;i++){
			mark[i] = 0;
		}
	}
	cout << max;
	
	
	
	return 0;
}
