#include<ctime>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define rt register int
#define l putchar('\n')
#define ll long long
#define r read()
using namespace std;
inline ll read(){
    ll x = 0; char zf = 1; char ch = getchar();
    while (ch != '-' && !isdigit(ch)) ch = getchar();
    if (ch == '-') zf = -1, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar(); return x * zf;
}
void write(ll y){if(y<0)putchar('-'),y=-y;if(y>9)write(y/10);putchar(y%10+48);}
void writeln(const ll y){write(y);putchar('\n');}
int i,j,k,m,n,x,y,z,cnt;
char c[205][2005];ll len[2005];int ans[2005];
int main(){
	n=r;
	for(rt g=1;g<=n;g++){
		scanf("%s",c[g]+1);
		len[g]=strlen(c[g]+1);
		for(rt i=1;i<=20;i++){
			bool fla=0;
			for(rt j=0;j<(1<<i);j++){
				fla=0;
				for(rt k=1;k<=len[g]-i+1;k++){
					for(rt p=0;p<i;p++)if(c[g][k+p]!=(j>>p&1)+'0')goto fails;
					//writeln(j);
					fla=1;
					fails:;
				}
				if(!fla){
					ans[g]=i-1;
					goto GGG;
				}
			}
			
			
		} 
		GGG:;
	}
	for(rt T=r;T;T--){
		x=r;y=r;
		n++;int plx=len[x],ply=len[y];
		len[n]=len[x]+len[y];ans[n]=max(ans[x],ans[y]);
		for(rt i=1;i<=len[n];i++)
		if(i<=plx)c[n][i]=c[x][i];
		else c[n][i]=c[y][i-plx];
		if(len[n]>1000){
			
			for(rt i=501;i<=1000;i++)c[n][i]=c[n][len[n]-1000+i];
			len[n]=1000;
		}
		for(rt i=1;i<=200;i++){
			bool fla=0;
			for(rt j=0;j<(1<<i);j++){
				fla=0;
				for(rt k=1;k<=len[n]-i+1;k++){
					for(rt p=0;p<i;p++)if(c[n][k+p]!=(j>>p&1)+'0')goto fail;
					//writeln(j);
					fla=1;
					fail:;
				}
				if(!fla){
					ans[n]=max(ans[n],i-1);
					goto GG;
				}
			}
			
			
		} 
		GG:;
		writeln(ans[n]);
	}
	return 0;
}
