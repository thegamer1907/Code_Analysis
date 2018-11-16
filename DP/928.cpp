#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int dp[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) 
			dp[i][j]=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int c1=0,c0=0;
			for(int k=i;k<=j;k++){
				if(a[k]==1)c1+=1;
				else if(a[k]==0) c0+=1;
			}
			
			dp[i][j]=c0;
			for(int k=0;k<i;k++) if(a[k]==1)dp[i][j]+=1;
			for(int k=j+1;k<n;k++) if(a[k]==1) dp[i][j]+=1;
			// if(dp[i][j]>100)cout<<dp[i][j]<<" "<<i<<" "<<j<<endl;
		}
	}
	int max1=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			max1=max(max1,dp[i][j]);
		}
	}
	int flag=0;
	for(int i=0;i<n;i++){
		if(a[i]==0) {flag=1; break;}
	}
	if(!flag) max1=n-1;
	cout<<max1<<endl;
}