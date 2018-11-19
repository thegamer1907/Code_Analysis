//Author:CookiC
//#include"stdafx.h"
#include<iostream>
#include<bitset>
#include<cstring>
//#pragma warning(disable : 4996)
#define maxl 200
#define maxm 210
#define maxk 10
using namespace std;

int n,m;
bool S[maxm][maxk][1024];
char str[maxl];
int len[maxm],p[]={1,2,4,8,16,32,64,128,256,512,1024};
bitset<maxl> s[maxm];

void Find(const bitset<maxl> &s,bool (*S)[1024],int len){
	int i,j,k;
	for(i=1;i<maxk&&i<=len;++i){
		bitset<maxl> mask(p[i]-1);
		for(j=0;j<p[i];++j){
			bitset<maxl> t(j);
			for(k=0;k<=len-i;++k)
				if((mask<<k&s^t<<k)==0){
					S[i][j]=1;
					break;
				}
		}
	}
}

void Merge(int z,int x,int y){
	int lent=0;
	bitset<maxl> t;
	s[z]=s[x]<<len[y]|s[y];
	len[z]=len[x]+len[y];
	if(len[x]>50){
		t=s[x]<<150>>150;
		lent=50;
	}
	else{
		t=s[x];
		lent=len[x];
	}
	if(len[y]>50){
		t=t<<50|s[y]>>len[y]-50;
		lent+=50;
	}
	else{
		t=t<<len[y]|s[y];
		lent+=len[y];
	}
	Find(t,S[z],lent);
	if(len[z]>100){
		s[z]=s[z]>>len[z]-50<<50|s[z]<<150>>150;
		len[z]=100;
	}
	
	int i,j;
	for(i=1;i<maxk;++i)
		for(j=0;j<p[i];++j)
			S[z][i][j]|=S[x][i][j]|S[y][i][j];
}

int CountK(int I){
	int i,j;
	for(i=1;i<maxk;++i){
		for(j=0;j<p[i]&&S[I][i][j];++j);
		if(j<p[i])
			break;
	}
	return i-1;
}

int main(){
//	freopen("test.in","r",stdin);
//	freopen("test.out","w",stdout);
	ios::sync_with_stdio(false);
	
	int i,j;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>str;
		len[i]=strlen(str);
		for(j=len[i]-1;j>=0;--j)
			s[i][len[i]-1-j]=str[j]-'0';
		Find(s[i],S[i],len[i]);
	}
	
	int x,y;
	cin>>m;
	for(i=0;i<m;++i){
		cin>>x>>y;
		Merge(i+n,x-1,y-1);
		cout<<CountK(i+n)<<endl;
	}
	return 0;
}

