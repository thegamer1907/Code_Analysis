#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define in insert
#define er erase
#define fr first
#define sc second
typedef long long ll;
const long long llinf=LLONG_MAX;
const int inf=INT_MAX;
const int nmax=1e5+5;
const int mod=1e9+7;
using namespace std;
int h,m,s,t1,t2,p[13],n[13],i;
//12 0 1 12 1
int main()
{
	//freopen("sol.in","r",stdin);
	//freopen("sol.out","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
	cin>>h>>m>>s>>t1>>t2;
	if(m/5==0)n[12]=1;
	else n[m/5]=1;
	if(s/5==0)n[12]=1;
	else n[s/5]=1;
	if(m/5+(m%5!=0 || s>0)==0)p[12]=1;
	else p[m/5+(m%5!=0 || s>0)]=1;
	if(s/5+(s%5!=0)==0)p[12]=1;
	else p[s/5+(s%5!=0)]=1;
	if(!s && !m)p[h]=n[h]=1;
	else if(m>0 || s>0)
	{
		n[h]=1;
		if(h==12)p[1]=1;
		else p[h+1]=1;
	}
	for(i=t1;;i++)
	{
		if(i==t2)rc("YES");
		if(i+1==13 && p[1])break;
		else if(i+1<=12 && p[i+1])break;
		if(i==12)i=0;
	}
	for(i=t1;;i--)
	{
		if(i==t2)rc("YES");
		if(i-1==0 && n[12])break;
		else if(i-1>=1 && n[i-1])break;
		if(i==1)i=13;
	}
	rc("NO");
} 
