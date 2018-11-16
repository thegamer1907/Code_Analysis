#include<bits/stdc++.h>
using namespace std;

char sec[100001];
int n;
int in, en;
int dp[100001];

void precal(){
	dp[1]=0;
	int len=strlen(sec);
	for(int i=2; i<=len; i++){
		if(sec[i-1]==sec[i-2]){
			dp[i]=dp[i-1]+1;
		}
		else{
			dp[i]=dp[i-1];
		}
	}
}

int main(){
	scanf("%s", sec);
	scanf("%d", &n);
	precal();
	for(int i=0; i<n; i++){
		scanf("%d %d", &in, &en);
		printf("%d\n", dp[en]-dp[in]);
	}
}