// In Name Of God

#include <bits/stdc++.h>
#define IB std::ios::sync_with_stdio(0);
#define forn(i,b) for(int i=0 ; i<b ; i++)
#define ford(i,a,b) for(int i=a ; i<=b ; i++)
#define endl "\n"
#define all(x) x.begin(),x.end()
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define po pop_back 
#define F first
#define S second
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair <int,int> pii;
const int inf=1e9+10;
const int mod=1e9+7;
const int maxn=100;
int a[maxn];
int n;

int main()
{
	IB; cin.tie(0); cout.tie(0); 
	cin>>n;
	forn(i,n)
	{
		cin>>a[i];
	}
	int res=0;
	int now;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			now=0;
			for(int k=0;k<n;k++)
			{
				if(k<i || k>j)
				{
					now+=a[k];	
				}
				else
				{
					now+=1-a[k];
				}
			}
			res=max(res,now);
		}
	}
	cout<<res;
}

//Written By Farhad Aman 







