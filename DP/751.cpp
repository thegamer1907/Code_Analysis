#include<bits/stdc++.h>
using namespace std;
int TEST,CASE=1;
#define pf printf
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define clr(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
#define eb emplace_back
#define MAX 1000100
#define all(x) x.begin(),x.end()
#define mod7 1000000007
typedef long long int ll;
int arr[105]={0};
int sum[105]={0};
int n,a,b,c,ans=0;
int main(void){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	//cout<<fixed<<setprecision(10);
	si(n);
	for(int i=1;i<=n;i++){
		si(arr[i]);
		sum[i]=sum[i-1]+arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n && j+i-1<=n;j++){
			a=sum[j-1];
			b=i-(sum[min(n,j+i-1)]-sum[j-1]);
			c=sum[n]-sum[min(n,j+i-1)];
			ans=max(ans,(a+b+c));
		}
	}
	pf("%d\n",ans);
	return 0;
}