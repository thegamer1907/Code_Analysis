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
	string g,h;
	cin>>g;
	h=g;
	reverse(h.begin(),h.end());
	bool flag=0,flag1=0,flag2=0;
	char ch=g[0],ch1=g[1];
	int n;
	cin>>n;
	string arr[n+1];
	rep(i,1,n)
	{
		cin>>arr[i];
		if(flag)
			continue;
		else if(arr[i]==g || arr[i]==h)
		{
			flag=1;
			continue;
		}
		if(arr[i][1]==ch)
			flag1=1;
		if(arr[i][0]==ch1)
			flag2=1;
	}
	if(flag)
		cout<<"YES";
	else if(flag1 && flag2)
		cout<<"YES";
	else
		cout<<"NO";

}