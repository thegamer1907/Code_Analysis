#include <bits/stdc++.h>

using namespace std;
const int MAXN=105;

int n;
char ans[5],a[MAXN][3];
bool one=0,two=0;

int main(){
	scanf(" %s%d",ans,&n);
	for(int i=1;i<=n;++i){
		scanf(" %s",a[i]);
		if(ans[0]==a[i][0]&&ans[1]==a[i][1]){
			printf("YES\n"); return 0;
		}
		if(ans[0]==a[i][1]) one=1;
		if(ans[1]==a[i][0]) two=1;
	}
	if(one&&two) printf("YES\n");
	else printf("NO\n");
	return 0;
}
