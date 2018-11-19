#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define LL long long
#define FOR(i,a,b) for (int i=a;i<=b;++i)
#define FORD(i,a,b) for (int i=a;i>=b;--i)
using namespace std;
typedef pair<int,int> pa;
typedef long double ld;
void getint(int &v){
    char ch,fu=0;
    for(ch='*'; (ch<'0'||ch>'9')&&ch!='-'; ch=getchar());
    if(ch=='-') fu=1, ch=getchar();
    for(v=0; ch>='0'&&ch<='9'; ch=getchar()) v=v*10+ch-'0';
    if(fu) v=-v;
}
int n,m,x,y;
set<int> S[222][222];
string L[222],R[222],s[222];
int main(){
	scanf("%d",&n);
	FOR(i,1,n){
		cin>>s[i];
		L[i]=R[i]=s[i];
		for (int j=0;j<s[i].size();++j){
			int t=0;
			for (int k=j;k<s[i].size();++k){
				if (k-j+1>=30) break;
				int l=k-j+1;
				if (s[i][k]=='1') t|=(1<<(l-1));
				S[i][l].insert(t);
			}
		}
	}
	scanf("%d",&m);
	FOR(i,n+1,n+m){
		getint(x),getint(y);
		L[i]=R[i]="";
		if (L[x].size()<30){
			string tmp=L[x]+L[y];
			FOR(j,0,min(29,(int)tmp.size()-1)) L[i]+=tmp[j];
		}
		else L[i]=L[x];
		if (R[y].size()<30){
			string tmp=R[x]+R[y];
			FORD(j,(int)tmp.size()-1,max(0,(int)tmp.size()-30)) R[i]=tmp[j]+R[i];
		}
		else R[i]=R[y];
		string tmp=R[x]+L[y];
		FOR(j,1,30){
			S[i][j]=S[y][j];
			for (set<int>::iterator it=S[x][j].begin();it!=S[x][j].end();++it)
				S[i][j].insert(*it);
		}
		for (int j=0;j<tmp.size();++j){
			int t=0;
			for (int k=j;k<tmp.size();++k){
				if (k-j+1>=30) break;
				int l=k-j+1;
				if (tmp[k]=='1') t|=(1<<(l-1));
				S[i][l].insert(t);
			}
		}
		int ans=0;
		FOR(j,1,30)
			if (S[i][j].size()==(1<<j)) ans=j;
		printf("%d\n",ans);
	}
	return 0;
}