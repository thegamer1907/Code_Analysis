#include<bits/stdc++.h>
typedef long long ll ; 

using namespace std;

const double EXP = 1e-6;
const int maxn = 50+10;
int a[maxn];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=a[k]&&a[i]!=0){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
