#include <bits/stdc++.h>
using namespace std;
int n, k;
bool vis[16];
int cnt[4][2];
int main(){
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++){
		int num=0;
		for(int j=0;j<k;j++){
			int tmp;
			scanf("%d", &tmp);
			num=num*2+tmp;
		}
		vis[num]=true;
	}
	int p=1<<k;
	bool ok=false;
	for(int i=1;i<1<<p;i++){
		bool tag=true;
		memset(cnt, 0, sizeof(cnt));
		for(int j=0;j<p;j++){
			if((i>>j)&1){
				if(!vis[j]){
					tag=false;
					break;
				}
				for(int l=0;l<k;l++){
					if((j>>l)&1){
						cnt[l][1]++;
					}
					else cnt[l][0]++;
				}
			}
		}
		if(!tag)continue;
		for(int j=0;j<k;j++)if(cnt[j][0]<cnt[j][1])tag=false;
		if(tag)ok=true;
	}
	if(ok)printf("YES\n");
	else printf("NO\n");
}

