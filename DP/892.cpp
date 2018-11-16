#include<bits/stdc++.h>
using namespace std;
bool nol;
int n, satu, a[105], dp[105][105],ans;
int flip(int x, int y){
	int tmp = satu;
	for(int k=x;k<=y;k++){
		if(a[k]==0){
			tmp++;
		}else{
			tmp--;
		}
	}
	return tmp;
}

int main(){
	cin>>n;
	for(int i=1;i<=n; i++){
		cin>>a[i];
		if(a[i]==1){
			satu++;
		}
		else{
			nol=1;
		}
	}
	if(nol){
		for(int i=1;i<=n;i++){
			for(int j=1; j<=n; j++){
				dp[i][j]=flip(i,j);
				ans=max(ans,dp[i][j]);
			}
		}
	}else{
		ans=satu-1;
	}
	cout<<ans;
}
