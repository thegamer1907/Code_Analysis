#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;
typedef long long LL;
const LL mod=1000000007;
const int maxn=100010;
const int inf=0x3f3f3f3f;

int n,ans[maxn],a[maxn],p;

int main(){	
	cin>>n;
	p=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int q=max(0,a[i]-i+1);
		if(q%n==0) ans[i]=(q/n*n)+i-1;
		else ans[i]=(q/n+1)*n+i-1;
		if(ans[p]>ans[i]) p=i;
	}cout<<p<<endl;


	return 0;
}
