#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<map>
#include<bitset>
#include<stack>
#include<vector>
#include<set>
using namespace std;
#define MAXN 210
#define MAXM 30
#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define eps 1e-8
int n,m;
int lim=16;
char s[MAXN];
char sl[MAXN][MAXM],sr[MAXN][MAXM];
int lenl[MAXN],lenr[MAXN];
bool has[MAXN][17][66536];
int K[MAXN];
int rem[MAXN][17];
ll T;
int main(){
	int i,j,k,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",s+1);
		int l=strlen(s+1);
		for(j=1;j<=lim&&j<=l;j++){
			sl[i][++lenl[i]]=s[j];
		}
		for(j=max(1,l-lim+1);j<=l;j++){
			sr[i][++lenr[i]]=s[j];
		}
		for(k=1;k<=lim;k++){
			rem[i][k]=1<<k;
		}
		for(k=1;k<=lim&&k<=l;k++){
			int now=0;
			for(j=1;j<k;j++){
				now<<=1;
				now|=s[j]-'0';
			}
			for(;j<=l;j++){
				now<<=1;
				now|=s[j]-'0';
				now&=(1<<k)-1;
				/*
				for(int u=k-1;~u;u--){
					if(now&(1<<u)){
						cerr<<1;
					}else{
						cerr<<0;
					}
				}
				//*/
				if(!has[i][k][now]){
					rem[i][k]--;
				}
				has[i][k][now]=1;
			}
		}
	}
	scanf("%d",&m);
	while(m--){
		n++;
		scanf("%d%d",&x,&y);
		for(i=1;i<=lenl[x];i++){
			s[i]=sl[x][i];
		}
		for(i=1;i<=lenl[y];i++){
			s[lenl[x]+i]=sl[y][i];
		}
		for(i=1;i<=lenl[x]+lenl[y]&&i<=lim;i++){
			sl[n][++lenl[n]]=s[i];
		}
		int t=0;
		for(i=lenr[y];i;i--){
			s[++t]=sr[y][i];
		}
		for(i=lenr[x];i;i--){
			s[++t]=sr[x][i];
		}
		for(i=1;i<=lenr[x]+lenr[y]&&i<=lim;i++){
			sr[n][++lenr[n]]=s[i];
		}
		for(i=1;i<=lenr[n]/2;i++){
			swap(sr[n][i],sr[n][lenr[n]-i+1]);
		}
		for(i=1;i<=lenr[x];i++){
			s[i]=sr[x][i];
		}
		for(i=1;i<=lenl[y];i++){
			s[lenr[x]+i]=sl[y][i];
		}
		for(k=1;k<=lim;k++){
			rem[n][k]=1<<k;
			for(j=0;j<(1<<k);j++){
				T++;
				has[n][k][j]=has[x][k][j]|has[y][k][j];
				if(has[n][k][j]){
					rem[n][k]--;
				}
			}
			if(k<=lenr[x]+lenl[y]){
				int now=0;
				for(j=1;j<k;j++){
					now<<=1;
					now|=s[j]-'0';
				}
				for(;j<=lenr[x]+lenl[y];j++){
					T++;
					now<<=1;
					now|=s[j]-'0';
					now&=(1<<k)-1;
					if(!has[n][k][now]){
						rem[n][k]--;
					}
					has[n][k][now]=1;
				}
			}
		}
		int ans=0;
		for(i=1;i<=lim;i++){
			if(!rem[n][i]){
				ans=i;
			}
		}
		printf("%d\n",ans);
	}
	/*
	cerr<<T<<endl;
	cerr<<clock()<<endl;
	//*/
	return 0;
}

/*

*/
