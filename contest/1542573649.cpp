#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
struct rec{
	int x,y;
};
int i,j,m,n,maxk,maxnum,cnt,k,temp,x,y,temp1,temp2,maxans;
string s[305],ss,t[20005];
//int t[10005][109];
bool can[305][20005];
//rec pre[1001];
bool match(string s,string t){//if s is a substring of t;
	int next[205];
	next[0]=-1;
	int i,j;
	int len=s.length();
	j=-1;
	for(i=1;i<=len-1;i++){
		while((s[j+1]!=s[i])&&(j>-1))j=next[j];
		if (s[j+1]==s[i]){
			next[i]=j+1;
			j++;
		}
		else next[i]=j;
	}
	int lent=t.length();
	j=-1;
	for(i=0;i<=lent-1;i++){
		while((s[j+1]!=t[i])&&(j>-1))j=next[j];
		if (s[j+1]==t[i]) j++;
		if (j==len-1) return true;
	}
	return false;
}
int main(){
	srand(2333);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cin>>s[i];
	}
	maxk=20;
	maxnum=1000;
	cnt=0;
	for(i=1;i<=maxk;i++){
		for(j=1;j<=maxnum;j++){
			cnt++;
			t[cnt]="";
			for(k=1;k<=i;k++){
				temp=rand()% 2;
				if (temp==0) t[cnt]+='0';
				else t[cnt]+='1';
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=cnt;j++){
			if (match(t[j],s[i])) can[i][j]=true;
		}
	}
	//printf("%s\n",t[378].c_str());
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		//pre[i+n].x=x;
		//pre[i+n].y=y;
		maxans=100000;
		temp1=s[x].length();
		temp2=s[y].length();
		ss="";
		if (temp1+temp2>200){
			for(k=100;k>=1;k--){
				if (temp1-k>=0) ss+=s[x][temp1-k];
			}
			for(k=0;k<=100;k++){
				if (k<=temp2-1) ss+=s[y][k];
				else break;
			}
		}else{
			ss=s[x]+s[y];
		}
		//printf("%s\n",ss.c_str());
		for(j=1;j<=cnt;j++){
			if ((can[x][j])||(can[y][j])){
				can[i+n][j]=true;
				continue;
			}
			if (match(t[j],ss)) can[i+n][j]=true;
			else can[i+n][j]=false;
			if ((!can[i+n][j])&&(t[j].length()-1<=maxans))
				maxans=t[j].length()-1;
			//printf("%d\n",maxans);

		}
		printf("%d\n",maxans);
		if (temp1+temp2>200){
			ss="";
			for(k=0;k<=100;k++){
				if (k<=temp1-1) ss+=s[x][k];
				else break;
			}
			for(k=100;k>=1;k--){
				if (temp2-k>=0) ss+=s[y][temp2-k];
			}
			s[i+n]=ss;
		}else{
			s[i+n]=s[x]+s[y];
		}

	}
	return 0;
}