#include<bits/stdc++.h>
#define inf 68308930
#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d %d",&a,&b)
#define sccc(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf(a) printf("%d",a)
#define pff(a,b) printf("%d %d",a,b)
#define pfff(a,b,c) printf("%d %d %d",a,b,c)
#define pb(a) push_back(a)
#define em empty()
#define fr front()
#define cl clear()
#define sz size()
#define fri(b) freopen(b,"r",stdin)
#define fro(b) freopen(b,"w",stdout)
#define samed burak
using namespace std;

int ctrl[100013];

int dp[100013];

int main(){
	int n,sorgu;
	cin>>n>>sorgu;
	int arr[n+13];
	for(int r=1;r<=n;r++){
		sc(arr[r]);
	}
	dp[n]=1;
	ctrl[arr[n]]=1;
	for(int i=n-1;i>=1;i--){
		if(ctrl[arr[i]]!= 1){
			dp[i]=dp[i+1]+1;
			ctrl[arr[i]]=1;
		}
		else{
			dp[i]=dp[i+1];
		}
	}
	for(int j=1;j<=sorgu;j++){
		int p;
		sc(p);
		printf("%d\n",dp[p]);
	}
	
	return 0;
}