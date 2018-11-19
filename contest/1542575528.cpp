#include<bits/stdc++.h>
using namespace std;
#define loop(i,L,R) for(int i=(L);i<=(R);i++)
#define rept(i,L,R) for(int i=(L);i<(R);i++)
#define isc(n) scanf("%d",&n)
#define llsc(n) scanf("%lld",&n)
#define dsc(n) scanf("%lf",&n)
#define enl cout<<endl
#define PB(x) push_back(x)
#define MP(x,y) make_pair(x,y)
#define xx first
#define yy second
typedef long long ll;
typedef pair<int,int>PI;
typedef pair<pair<int,int>,int>PII;

const int mx=1e5+10;
int pp[mx][5];
int n,k;
bool solve1()
{
	rept(i,0,n)
	{
		if(pp[i][0]==0)return true;
	}
	return false;
}
bool solve2()
{
	rept(i,0,n)
	{
		if(pp[i][0]==0 && pp[i][1]==0)return true;
	}
	int flag=0;
	rept(i,0,n)
	{
		if(pp[i][0]==0)flag=1;
	}
	if(!flag)return false;
	flag=0;
	rept(i,0,n)
	{
		if(pp[i][1]==0)flag=1;
	}
	if(!flag)return false;
	return true;
}

bool solve3()
{
	rept(i,0,n)
	{
		if(pp[i][0]==0 && pp[i][1]==0 && pp[i][2]==0)return true;
	}
	int flag=0;
	rept(i,0,n)
	{
		if(pp[i][0]==0)flag=1;
	}
	if(!flag)return false;
	flag=0;
	rept(i,0,n)
	{
		if(pp[i][1]==0)flag=1;
	}
	if(!flag)return false;
	flag=0;
	rept(i,0,n)
	{
		if(pp[i][2]==0)flag=1;
	}
	if(!flag)return false;
	rept(i,0,n)
	{
		int p=0;
		rept(j,0,k)if(pp[i][j])p++;
		if(p==1)return true;
	}
	return false;
}

bool solve4()
{
	rept(i,0,n)
	{
		if(pp[i][0]==0 && pp[i][1]==0 && pp[i][2]==0 && pp[i][3]==0)return true;
	}
	int flag=0;
	rept(i,0,n)
	{
		if(pp[i][0]==0)flag=1;
	}
	if(!flag)return false;
	flag=0;
	rept(i,0,n)
	{
		if(pp[i][1]==0)flag=1;
	}
	if(!flag)return false;
	flag=0;
	rept(i,0,n)
	{
		if(pp[i][2]==0)flag=1;
	}
	if(!flag)return false;
	flag=0;
	rept(i,0,n)
	{
		if(pp[i][3]==0)flag=1;
	}
	if(!flag)return false;
	int type[6]={0,0,0,0,0,0};
	rept(i,0,n)
	{
		int p=0;
		rept(j,0,k)if(pp[i][j])p++;
		if(p==1)
		{
			
			return true;
			
		}
		else if(p==2)
		{
			if(pp[i][0] && pp[i][1])type[0]++;
			if(pp[i][0] && pp[i][2])type[1]++;
			if(pp[i][0] && pp[i][3])type[2]++;
			if(pp[i][1] && pp[i][2])type[3]++;
			if(pp[i][1] && pp[i][3])type[4]++;
			if(pp[i][2] && pp[i][3])type[5]++;
		}
	}
	if(type[0] && type[5])return true;
	if(type[1] && type[4])return true;
	if(type[2] && type[3])return true;
	return false;
}

int main()
{
	cin>>n>>k;
	rept(i,0,n)
	{
		rept(j,0,k)cin>>pp[i][j];
	}
	if(k==1)
	{
		if(solve1())cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}else if(k==2)
	{
		if(solve2())cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}else if(k==3)
	{
		if(solve3())cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}else if(k==4)
	{
		if(solve4())cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
