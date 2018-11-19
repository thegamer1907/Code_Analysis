#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
#define bitcount __builtin_popcountll
#define ll long long
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
int main()
{
	int i,j,k;
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h = 30.0*h + 0.5*((s/60.0)+m);
	m = 6.0*m + 0.1*s;
	s = 6.0*s;
	t1 = 30.0*t1;
	t2 = 30.0*t2;
	if(h>=360.0)
		h-=360.0;
	if(m>=360.0)
		m-=360.0;
	if(s>=360.0)
		s-=360.0;
	if(t1>=360.0)
		t1-=360.0;
	if(t2>=360.0)
		t2-=360.0;
	// cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
	if(t1>t2)
		swap(t1,t2);
	if(h>=t1&&h<=t2&&m>=t1&&m<=t2&&s>=t1&&s<=t2)
	{
		printf("YES\n");
		return 0;
	}
	else if((h<t1||h>t2)&&(m<t1||m>t2)&&(s<t1||s>t2))
	{
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}