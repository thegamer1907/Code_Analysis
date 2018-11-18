#include<cstdio>
bool chk(int k,bool*v){
	if(*v)return 1;
	for(int u=(1<<k)-1,s=u;s;s--)if(v[s])
		for(int t=u-s;t;t=(t-1)&(u-s))if(v[t])return 1;
	return 0;
}
int main(){
	//int q;scanf("%d",&q);
	//while(q--){
		int n,k;
		bool v[16]={0};
		scanf("%d%d",&n,&k);
		while(n--){
			int x,s=0;
			for(int i=0;i<k;i++)scanf("%d",&x),s|=x<<i;
			v[s]=1;
		}
		puts(chk(k,v)?"YES":"NO");
	//}
}