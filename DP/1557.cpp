#include <iostream>
using namespace std;

int main() {
	int n,index1=0,index2=0,ans=0;
	cin>>n;
	int a[n];
	int dp[n][n];
	for (int i=0;i<n;i++){
	for (int x=0;x<n;x++){
		dp[i][x]=0;	
		}
	}
	
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<n;i++){
		for (int x=i;x<n;x++){
			for (int z=i;z<=x;z++){
				if (a[z]==1) dp[i][x]--;
				else dp[i][x]++;
			}
		}
	}
	
	/*for (int i=0;i<n;i++){
		for (int x=0;x<n;x++){
			cout<<"dp["<<i<<"]["<<x<<"]="<<dp[i][x]<<endl;
		}
	}*/
	
	for (int i=0;i<n;i++){
		for (int x=i;x<n;x++){
			if (dp[i][x]>dp[index1][index2]){
				index1=i;
				index2=x;
			}
		}
	}
	//cout<<"index1="<<index1<<" index2="<<index2<<endl;
	for (int i=index1;i<=index2;i++){
		if (a[i]==0) a[i]=1;
		else a[i]=0;
	}
	for (int i=0;i<n;i++) ans+=a[i];
	if (ans<0) cout<<0;
	else cout<<ans;
	return 0;
}