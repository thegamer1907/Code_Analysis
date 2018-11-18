#include<bits/stdc++.h>
int n,k,x,p,cnt[17],a;
bool flag;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i){
		p=0;
		a=1;
		for(int j=1;j<=k;++j) scanf("%d",&x),p+=a*x,a*=2;
		cnt[p]++;
	}
	if(cnt[0]) flag=1;
	else{
		for(int i=1;i<=k*k-1;++i)
			for(int j=1;j<=k*k-1;++j)
				if(!(i&j)&&cnt[i]&&cnt[j])
					flag=1;
	}
	if(flag) puts("YES");
	else puts("NO");
}