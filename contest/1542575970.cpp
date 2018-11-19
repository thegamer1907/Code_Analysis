#include<cstdio>
int n,k,status[100005][10],cnt[100005]={0},v[100005]={0},v2[100005]={0};
bool yuki[1005]={false};
void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}
void qsort(int l,int r){
	int i=l,j=r,x=cnt[(l+r)>>1];
	do{
		while(cnt[i]>x) i++;
		while(cnt[j]<x) j--;
		if(i<=j){
			swap(cnt[i],cnt[j]);
			for(int qwq=1;qwq<=k;qwq++) swap(status[i][qwq],status[j][qwq]);
			swap(v[i],v[j]);
			swap(v2[i],v2[j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j) qsort(l,j);
	if(i<r) qsort(i,r);
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			scanf("%d",&status[i][j]);
			if(status[i][j]==0) cnt[i]++;
			v[i]=v[i]*10+status[i][j];
			v2[i]=(v2[i]<<1)+status[i][j];
		}
		yuki[v2[i]]=true;
	}
	qsort(1,n);
	int cnt[10]={0},now=0;
	bool flag=false;
	for(int i=1;i<=n;i++){
		if((v2[i]&now)!=0) continue;
		cnt[0]++;
		now=(now|v2[i]);
		bool ff=true;
		for(int j=1;j<=k;j++){
			if(status[i][j]==1) cnt[j]++;
			if(cnt[j]>cnt[0]/2) ff=false;
		}
		if(ff){
			flag=true;
			break;
		}
	}
	bool suki=false;
	for(int i=0;i<=16;i++){
		for(int j=0;j<=16;j++){
			if((i&j)!=0) continue;
			if(yuki[i]&&yuki[j]) suki=true;
		}
	}
	if(suki) printf("YES\n"); else printf("NO\n");
	return 0;
}
