#include<bits/stdc++.h>
const int N = 1e7+100;
int s[N],f[N],a[N],cnt,n;
int t[N];
int main(){
	for(int i=2;i<=(N-100);++i){
		if(!f[i]){
			a[++cnt]=i;
			t[i]=i;
			for(int j=2;j*i<=N-100;++j){
				f[i*j]=1;
				t[i*j]=i;
			}
		}
	}
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		int x;
		scanf("%d",&x);
		while(x!=1){
			int b=t[x];
			s[b]++;
			while(x%b==0) x/=b;
		}
	}
	for(int i=1;i<=N-100;++i){
		s[i]+=s[i-1];
	}
	int q;
	scanf("%d",&q);
	for(int i=1;i<=q;++i){
		int l,r;
		scanf("%d %d",&l,&r);
		l=std::min(l,N-100);
		r=std::min(r,N-100);
		int ans=s[r]-s[l-1];
		printf("%d\n",ans);
	}
} 