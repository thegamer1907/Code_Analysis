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

const int mx=12*3600;

int a[mx+10];
int main()
{
	rept(i,0,mx+10)a[i]=1;
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h=(h*3600+m*60+s)%mx;
	m=((m/5)*3600+((m%5)*12+(s*12)/60)*60+(s*12)%60)%mx;
	s=((s/5)*3600+((s%5)*12)*60)%mx;
	t1=(t1*3600)%mx;
	t2=(t2*3600)%mx;
	a[h]=0;
	a[m]=0;
	a[s]=0;
	int flag=0;
	//cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
	int p=(t1-1+mx)%mx;
	while(a[p] && p>=0)
	{
		if(p==t2)
		{
			flag=1;
			break;
		}
		p=(p-1+mx)%mx;
	}
	p=(t1+1)%mx;
	while(a[p] && p<=mx)
	{
		//cout<<p<<endl;
		if(p==t2)
		{
			flag=1;
			break;
		}
		p=(p+1)%mx;
	}
	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}
