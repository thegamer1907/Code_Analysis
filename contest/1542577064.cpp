#include<cstdio>
#include<cstring>
#include<algorithm>
#include<bitset>
using namespace std;
const int lim=15;
char ch[211],s[211][21],t[211][21];
bitset<40001> b[211][21];
int i,j,k,n,m,len,a[211][2],w,ans;
int gv(char *s,int l,int r){
	int i,res=0;
	for (i=l;i<=r;i++) res=res*2+s[i]-'0';
	return res;
}
int merge(int x,int y){
	int res,i,j,k,t1,t2;
	n++;
	for (i=1;i<=lim;i++) b[n][i]=(b[x][i]|b[y][i]);
	t1=strlen(t[x]+1);t2=strlen(s[y]+1);
	for (i=1;i<=t1+t2;i++)
	 if (i<=t1) ch[i]=t[x][i];else ch[i]=s[y][i-t1];
	for (i=1;i<=lim;i++){
		for (j=1;j<=t1+t2-i+1;j++) b[n][i].set(gv(ch,j,j+i-1));
	}
	for (res=0;res<lim&&b[n][res+1].count()==(1<<(res+1));res++);
	k=min(lim,t1+t2);
	for (i=1;i<=k;i++){
		s[n][i]=((i<=t1)?s[x][i]:s[y][i-t1]);
		t[n][k-i+1]=((i<=t2)?t[y][t2-i+1]:t[x][t1-(i-t2)+1]);
	}
	//("** %s %s\n",s[n]+1,t[n]+1);
	return res;
}
int main(){
	scanf("%d",&n);memset(s,0,sizeof(s));memset(t,0,sizeof(t));
	for (i=1;i<=n;i++){
		scanf("%s",ch+1);len=strlen(ch+1);w=min(lim,len);
		for (j=1;j<=w;j++) s[i][j]=ch[j],t[i][j]=ch[len-w+j];
		for (j=1;j<=lim;j++){
			b[i][j].reset();
			for (k=1;k<=len-j+1;k++) b[i][j].set(gv(ch,k,k+j-1));
		}
	}
	scanf("%d",&m);
	for (i=1;i<=m;i++){
		scanf("%d%d",&j,&k);
		ans=merge(j,k);
		printf("%d\n",ans);
	}
	return 0;
}