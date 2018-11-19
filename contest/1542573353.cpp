#include<bits/stdc++.h>
using namespace std;
#define M 205
string a[M];
string l[M],r[M];
bitset<1<<14>mark[M][14];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<min(14,(int)a[i].length());j++)l[i]+=a[i][j];
		for(int j=max(0,(int)a[i].length()-14);j<a[i].length();j++)r[i]+=a[i][j];
	}
	for(int i=1;i<=n;i++){
		int len=a[i].length();
		for(int j=0;j<len;j++){
			int sum=0;
			for(int k=j;k<len&&k-j<14;k++){
				if(a[i][k]=='1')sum|=1<<(k-j);
				mark[i][k-j][sum]=1;
			}
		}
	}
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int a,b,ans=0;
		scanf("%d %d",&a,&b);
		for(int j=0;j<14;j++)mark[i+n][j]=mark[a][j]|mark[b][j];
		string tmp=r[a]+l[b];
		int len=tmp.length();
		for(int j=0;j<len;j++){
			int sum=0;
			for(int k=j;k<len&&k-j<14;k++){
				if(tmp[k]=='1')sum|=1<<(k-j);
				mark[i+n][k-j][sum]=1;
			}
		}
		if(l[a].length()==14)l[i+n]=l[a];
		else {
			tmp=l[a]+l[b];
			for(int j=0;j<min(14,(int)tmp.length());j++)l[i+n]+=tmp[j];
		}
		if(r[b].length()==14)r[i+n]=r[b];
		else {
			tmp=r[a]+r[b];
			for(int j=max(0,(int)tmp.length()-14);j<tmp.length();j++)r[i+n]+=tmp[j];
		}
		for(int j=13;j>=0;j--)if(mark[i+n][j].count()==(1<<(j+1))){ans=j+1;break;}
		printf("%d\n",ans);
	}
	return 0;
}
