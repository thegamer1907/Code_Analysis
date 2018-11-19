#include<bits/stdc++.h>
#define rep(i,n) for(int i=1;i<=n;++i)
#define N 105
using namespace std;
char s[N][5],ss[5];int n;bool q1=0,q2=0,q=0;
int main(){
	scanf("%s",ss+1);
	scanf("%d",&n);
	rep(i,n)scanf("%s",s[i]+1);
	rep(i,n)if(s[i][1]==ss[1]&&s[i][2]==ss[2])q=1;
	rep(i,n)if(s[i][1]==ss[2])q1=1;
	rep(i,n)if(s[i][2]==ss[1])q2=1;
	if((q)||(q1&&q2))puts("YES");else puts("NO");
	return 0;
}
