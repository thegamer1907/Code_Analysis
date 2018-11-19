#include<bits/stdc++.h>
#define rep(i,n) for(int i=1;i<=n;++i)
#define N 100005
using namespace std;
bool a[2][2][2][2];int s[4],n,k,tp;
int main(){
	scanf("%d%d",&n,&k);
	rep(i,n){
		for(int j=0;j<k;++j)scanf("%d",s+j);
		a[s[0]][s[1]][s[2]][s[3]]=1;
	}
	for(int i=0;i<16;++i)for(int j=0;j<16;++j){
		if(i%2==1&&j%2==1)continue;
		if(i/2%2==1&&j/2%2==1)continue;
		if(i/4%2==1&&j/4%2==1)continue;
		if(i/8%2==1&&j/8%2==1)continue;
		if(a[i%2][i/2%2][i/4%2][i/8%2]==1&&a[j%2][j/2%2][j/4%2][j/8%2]==1){puts("YES");return 0;}
	}
	puts("NO");
	return 0;
}
