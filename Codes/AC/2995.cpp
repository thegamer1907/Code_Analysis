#include<bits/stdc++.h>
#define ll long long

#define nl printf("\n")
#define pb(x) push_back(x)

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define S3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define P(a) printf("%d",a)

#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a<b)?a:b)

#define PL(a) printf("%lld",a)
#define PLN(a) printf("%lld\n",a)
#define PLC(a) printf("%lld ",a)
#define SL(a) scanf("%lld",&a)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
#define SL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define SL4(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)

#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define FOOL(a) memset(a,false,sizeof(a))
#define fr(i,a,n) for(i=a;i<=n;i++)
#define frv(i,v) for(i=0;i<(int)v.size();i++)
#define pi acos(-1.0)
#define po 1000000
#define co 1000000
#define mod 786433

using namespace std;
ll z[1000000];
int main()
{
	ll n,L,R,i,k,x,y,ans;
	string s;
	cin>>s;n=s.length();
	L=0,R=0;
	z[0]=0;
	ans=0;
	x=0;
	for(i=1;i<n;i++) 
	{
  		if(i>R)
		{
    		L=R=i;
    		while(R<n and s[R-L]==s[R])R++;
    		z[i]=R-L,R--;
  		}		 
  		else 
		{
    		k=i-L;
    		if(z[k]<R-i+1)z[i]=z[k];
    		else 
			{
      			L=i;
      			while(R<n and s[R-L]==s[R])R++;
      			z[i]=R-L;R--;
    		}
  		}
  		if(z[i]==n-i and x>=n-i)
			if(ans<z[i])ans=z[i],y=i;
  		x=max(x,z[i]);
	}
	if(ans==0)printf("Just a legend");
	else 
		for(i=y;i<y+z[y];i++)
			printf("%c",s[i]);
	nl;
}
