#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,j,x[105],dp[105];
long long f(int a){
	if(a<0)return 0;
	if(dp[a]!=-1)return dp[a];
	dp[a]=f(a-1)+x[a];return f(a-1)+x[a];
}
int main(){
	int i;
	memset(dp,-1,sizeof(dp));
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	int w=0;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(w<(j-i+1)-(f(j)-f(i))+f(i-1)+f(n)-f(j)&&(j-i+1)-(f(j)-f(i))+f(i-1)+f(n)-f(j)!=f(n)){
				w=(j-i+1)-(f(j)-f(i))+f(i-1)+f(n)-f(j);
			}
		}
	}
	cout<<w<<endl;
	return 0;
} 