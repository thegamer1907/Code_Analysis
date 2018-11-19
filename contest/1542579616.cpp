#include<bits/stdc++.h>
using namespace std;

#define DEBUG

#ifndef TZNLOCAL
#undef DEBUG
#endif

#ifdef DEBUG
#define debug(...) fprintf(stderr,__VA_ARGS__)
#else
#define debug(...) ;
#endif

#define maxn 222
#define maxk 27
typedef long long ll;

string s[maxn];
string ss[2][maxn];
set<ll> mp[maxn][maxk+2];
int tag[maxn];
int n,m;

void modify(int idx,string s)
{
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			if (j-i+1>maxk) break;
			ll msk=0;
			for(int p=i;p<=j;p++)
			{
				msk*=2;
				msk+=s[p]-'0';
			}
			mp[idx][j-i+1].insert(msk);
		}
	}
}
	
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		ss[0][i]=ss[1][i]=s[i];
		modify(i,s[i]);
	}
	cin>>m;
	for(int i=n+1;i<=n+m;i++)
	{
		int x,y;
		cin>>x>>y;
		{
			int p1=0,p2=0;
			for(int plen=0;plen<maxk;plen++)
			{
				if (p1<ss[0][x].length())
				{
					ss[0][i]+=ss[0][x][p1++];
				}
				else if (p2<ss[0][y].length())
				{
					ss[0][i]+=ss[0][y][p2++];
				}
				else
				{
					break;
				}
			}
		}
		{
			int p1=ss[1][x].length()-1,p2=ss[1][y].length()-1;
			for(int plen=0;plen<maxk;plen++)
			{
				if (p2>=0)
				{
					ss[1][i]=ss[1][y][p2--]+ss[1][i];
				}
				else if (p1>=0)
				{
					ss[1][i]=ss[1][x][p1--]+ss[1][i];
				}
				else
				{
					break;
				}
			}
		}
		{
			string con=ss[1][x]+ss[0][y];
			for(int j=1;j<=maxk;j++)
			{
				mp[i][j]=mp[y][j];
				for(auto temp:mp[x][j])
				{
					mp[i][j].insert(temp);
				}
			}
			modify(i,con);
		}
		int ans=0;
		for(int j=maxk;j>=1;j--)
		{
			if (mp[i][j].size()==(1ll<<j))
			{
				ans=j;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
