#include<bits/stdc++.h>

using namespace std;
const int maxn = 1e2+10;
int a[maxn],b[maxn],vis[maxn];

int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
 		scanf("%d",&m);
	for(int i=1;i<=m;i++) scanf("%d",&b[i]);
	sort(a+1,a+n+1);
	sort(b+1,b+1+m);
	int ans = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!vis[j] && abs(a[i]-b[j])<=1){
				ans++;
				vis[j]=1;
				break;
			}
		}
	}

	printf("%d",ans);
} 