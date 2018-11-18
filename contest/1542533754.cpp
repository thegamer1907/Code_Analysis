#include<bits/stdc++.h>
#define N 222222
#define M 1000000007
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define VI vector<int>
#define X first
#define Y second
#define CL(a) memset(a,0,sizeof a) 
#define fr(i,n) for(int i=1;i<=n;i++)
#define rd(x) scanf("%d",&x)
using namespace std;
int i,j,k,l,r,n,m,x,y,len,an,cnt[222][22];
string s,S,ls[222],rs[222];
map<string,int>mp[222];
map<string,int>::iterator it;
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cin>>s;
		for(j=0;ls[i].length()<18&&j<s.length();j++)ls[i]=ls[i]+s[j];
		for(j=s.length()-1;rs[i].length()<18&&j>=0;j--)rs[i]=s[j]+rs[i];
		for(len=1;len<=18;len++){
			for(l=0;l+len-1<s.length();l++){
				r=l+len-1;S="";
				for(k=l;k<=r;k++)S=S+s[k];
				if(!mp[i][S])mp[i][S]=1,cnt[i][S.length()]++;
			}
		}
	}
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		ls[n+i]=ls[x];rs[n+i]=rs[y];
		for(it=mp[x].begin();it!=mp[x].end();it++)if(!mp[n+i][(*it).X])mp[n+i][(*it).X]=1,cnt[n+i][(*it).X.length()]++;
		for(it=mp[y].begin();it!=mp[y].end();it++)if(!mp[n+i][(*it).X])mp[n+i][(*it).X]=1,cnt[n+i][(*it).X.length()]++;
		for(j=0;j<rs[x].length();j++)
			for(k=0;k<ls[y].length();k++){
				S="";
				for(l=j;l<rs[x].length();l++)S=S+rs[x][l];
				for(l=0;l<=k;l++)S=S+ls[y][l];
				if(S.length()<=18)if(!mp[n+i][S])mp[n+i][S]=1,cnt[n+i][S.length()]++;
			}
		for(j=0;ls[n+i].length()<18&&j<ls[y].length();j++)ls[n+i]=ls[n+i]+ls[y][j];
		for(j=rs[x].length()-1;rs[n+i].length()<18&&j>=0;j--)rs[n+i]=rs[x][j]+rs[n+i];
		an=0;
		for(len=1;len<=18;len++)if(cnt[n+i][len]==(1<<len))an=len;
		printf("%d\n",an);
	}
}