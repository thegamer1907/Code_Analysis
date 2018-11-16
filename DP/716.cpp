#include<iostream>
#include<string>
#include<cstring>
using namespace std;
long long int dp[100005];string a;
long long f(int c){
	if(c==0)return 0;
	if(dp[c]!=-1){
		return dp[c];
	}
	if(a[c-2]==a[c-1]){
		dp[c]=f(c-1)+1;return f(c-1)+1;
	}else{
		dp[c]=f(c-1);return f(c-1);
	}
}
int main(){
	cin>>a;
	int m;cin>>m;int i,j,l,r,count,ans[100005];
	memset(dp,-1,sizeof(dp));
	for(i=0;i<m;i++){
		cin>>l>>r;
		ans[i]=f(r)-f(l);
	}
	for(i=0;i<m;i++){
		cout<<ans[i]<<endl;
	}
} 