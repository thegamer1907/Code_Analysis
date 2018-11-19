/******************************************
*    AUTHOR:         CHIRAG AGARWAL       *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;
const int MAX=203;
const int K=13;

string fr[MAX];
string bck[MAX];
string s[MAX];
int ans[MAX];
int pos[MAX][K][1<<(K+1)];
int tot[MAX][K+1];

void get(int idx)
{
	string x="";
	for(int i=0;i<min(K,(int)s[idx].length());i++)
	{
		x+=s[idx][i];
	}
	fr[idx]=x;
	int st=max((int)s[idx].length()-K,0);
	x="";
	for(int i=st;i<s[idx].length();i++)
	{
		x+=s[idx][i];
	}
	bck[idx]=x;
}
//back and front calculated

void sett(int idx)
{
	for(int i=1;i<=K;i++)
	{
		if(s[idx].length()<i)
		{
			continue;
		}
		int num=0;
		for(int j=0;j<i;j++)
		{
			num=(num*2)+(s[idx][j]-'0');
		}
		pos[idx][i][num]=1;
		for(int j=i;j<s[idx].length();j++)
		{
			num-=(s[idx][j-i]-'0')*(1<<(i-1));
			num*=2;
			num+=(s[idx][j]-'0');
			pos[idx][i][num]=1;
		}
		int yu=0;
		for(int j=0;j<(1<<i);j++)
		{
			yu+=pos[idx][i][j];
		}
		tot[idx][i]=yu;
//		printf("%d\n",yu);
	}
}
//all possible masks sett for the initial string

int combine(int x,int a,int b)
{
	fr[x]=fr[a];
	bck[x]=bck[b];
	if(fr[x].length()<K)
	{
		fr[x]=fr[a]+fr[b];
	}
	if(bck[x].length()<K)
	{
		bck[x]=bck[a]+bck[b];
	}

	for(int i=1;i<=K;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			pos[x][i][j]=pos[a][i][j]|pos[b][i][j];	
		}
	}
	string cur=bck[a]+fr[b];	
	for(int i=1;i<=K;i++)
	{
		if(cur.length()<i)
		{
			continue;
		}
		int num=0;
		for(int j=0;j<i;j++)
		{
			num=(num*2)+(cur[j]-'0');
		}
		pos[x][i][num]=1;
		for(int j=i;j<cur.length();j++)
		{
			num-=(cur[j-i]-'0')*(1<<(i-1));
			num*=2;
			num+=(cur[j]-'0');
			pos[x][i][num]=1;
		}
		int yu=0;
		for(int j=0;j<(1<<i);j++)
		{
			yu+=pos[x][i][j];
		}
		tot[x][i]=yu;
	}
	int an=0;
	for(int i=1;i<=K;i++)
	{
		if(tot[x][i]==(1<<i))
		{
			an=i;
		}
	}
	return an;
}

int main() 
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		get(i);
		sett(i);
		for(int j=1;j<=K;j++)
		{
			if(tot[i][j]==(1<<j))
			{
				ans[i]=j;
			}
		}
	}
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",combine(n+i,a,b));
	}

	return 0;
}