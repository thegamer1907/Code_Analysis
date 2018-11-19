#include<bits/stdc++.h>
using namespace std;

#define rep(i,k,n) for(int i=k;i<=n;i++)
#define ll long long
#define elif else if
#define ff first
#define ss second
#define pii pair<ll int,ll int>
#define mp make_pair
#define pb push_back
#define CLEAR(array, value) memset(ptr, value, sizeof(array));
#define si(a)     scanf("%d", &a)
#define sl(a)     scanf("%lld", &a)
#define pi(a)     printf("%d", a)
#define pl(a)     printf("%lld", a)
#define sll2(m,n) scanf("%lld%lld",&(m),&(n))
#define sll3(m,n,o) scanf("%lld%lld%lld",&(m),&(n),&(o))
#define sll4(m,n,o,p) scanf("%lld%lld%lld%lld",&(m),&(n),&(o),&(p))
#define sdd(n) scanf("%lf",&(n))
#define sdd2(m,n) scanf("%lf%lf",&(m),&(n))
#define sdd3(m,n,o) scanf("%lf%lf%lf",&(m),&(n),&(o))
#define sdd4(m,n,o,p) scanf("%lf%lf%lf%lf",&(m),&(n),&(o),&(p))
#define pn        printf("\n")
#define s(a) sort(a.begin(),a.end())
# define INF 0x3f3f3f3f
int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	t1=t1*30;
	t2=t2*30;
	double sd=s*6;
	double md=m*6+(.1*s);
	double x=md/6;
	double hd=(h%12)*30+x*.5;
	double arr[]={hd,md,sd};
	sort(arr,arr+3);
	//cout<<t1<<" "<<t2<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
	if(t1>arr[0] && t1<arr[1] && t2>arr[0] && t2<arr[1])
		cout<<"YES";
	else if(t1>arr[1] && t1<arr[2] && t2>arr[1] && t2<arr[2])
		cout<<"YES";
	else if((t1>arr[2] || t1<arr[0]) && (t2>arr[2] || t2<arr[0]))
		cout<<"YES";
	else
		cout<<"NO";
}