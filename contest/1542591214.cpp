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

string a[111];
int main()
{
	string p;
	cin>>p;
	int n;
	cin>>n;
	rept(i,0,n)
	{
		cin>>a[i];
	}
	int flag=0;
	rept(i,0,n)
	{
		if(p==a[i])
		{
			flag=1;
			break;
		}
	}
	rept(i,0,n)
	{
		if(flag)break;
		rept(j,0,n)
		{
			string k="";
			k=k+a[j][1];
			k=k+a[i][0];
			//cout<<k<<endl;
			if(k==p)
			{
				flag=1;
				break;
			}
		}
	}

	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
