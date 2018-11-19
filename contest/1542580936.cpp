#include<bits/stdc++.h>
/*
ID: arun.ga1
LANG: C++
TASK: 
*/

using namespace std;

#define prime 1000000007
#define DEBUG(x) cout<<'>'<<#x<<':'<<x<<"\n"
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define p1(x) cout<<x<<"\n" 
#define p2(x,y) cout<<x<<" "<<y<<"\n" 
#define p3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define i1(x) cin>>x
#define i2(x,y) cin>>x>>y
#define i3(x,y,z) cin>>x>>y>>z
#define elif else if

const int INF = 1<<29;
typedef long long ll;

/////////////////////////////////////////////////////////////////////

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll h,m,s,t1,t2,arr[125]={0},i;
	cin >> h >> m >> s >> t1 >> t2;
	if(m==0 && s==0)
	{
		if(2*h<120)
			arr[10*h]=1;
		else
			arr[10*h - 120] = 1;
	}
	else
	{
		if(10*h+1<120)
			arr[10*h+1]=1;
		else
			arr[10*h-119] = 1;
	}
	if(s==0)
	{
		if(2*m<120)
			arr[2*m]=1;
		else
			arr[2*m-120]=1;
	}
	else
	{
		if(2*m+1<120)
			arr[2*m+1]=1;
		else
			arr[2*m-119]=1;
	}
	arr[s*2] = 1;
	bool flg1 = 0,flg2 = 0;
	ll start = t1 * 10;
	if (start >= 120)
		start -= 120;
	ll fin = t2*10;
	if(fin >=120)
		fin-=120;
	while(start!=fin)
	{
		if(arr[start])
		{
			flg1 = 1;
			break;
		}
		start++;
		if(start==120)
			start = 0;
	}
	start = t1 * 10;
	if (start >= 120)
		start -= 120;
	while(start!=fin)
	{
		if(arr[start])
		{
			flg2 = 1;
			break;
		}
		start--;
		if(start==-1)
			start = 119;
	}
	if(!flg1 || !flg2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

