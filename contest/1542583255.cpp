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
void fuckit()
{
	cout << "YES";
}

/////////////////////////////////////////////////////////////////////

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s[105],ori;
	ll n,i,j;
	cin >> ori >> n;
	REP(i,n)
		cin >> s[i];
	REP(i,n)
	{
		REP(j,n)
		{
			string lol = s[i] + s[j];
			if(lol[0]==ori[0] && lol[1]==ori[1])
			{
				fuckit();
				return 0;
			}
			if(lol[1]==ori[0] && lol[2]==ori[1])
			{
				fuckit();
				return 0;
			}
			if(lol[2]==ori[0] && lol[3]==ori[1])
			{
				fuckit();
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}

