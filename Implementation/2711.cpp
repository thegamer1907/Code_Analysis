//devil wins
#include<iostream>
#include <cinttypes>
#include<unordered_map>
#include<numeric>
#include<map>
#include<vector>
#include<string>
#include<cctype>
#include<cmath>
#include<ctime>
#include<queue>
#include<fstream>
#include<algorithm>
#include<climits>
#include<assert.h>
#include<cstring>
#include<iterator>
#include<stack>
#include<cstdlib>
#include<set>
#include<cstdio>
#include<bitset>
#include<tuple>
#include<iomanip>
#include<cstdint>
#define mod 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define outl(n) printf("%lld\n",n)
#define outs(n) printf("%lld ",n)
#define out(n) printf("%lld",n)
#define line printf("\n")
#define mid (l+r)/2
#define mem(a) memset(a,0,sizeof(a))
using namespace std;
const int64_t N=1e5+7,M=2e5+7;
int64_t IX=1e18,IN=-1e18;
int64_t ten[]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000};
vector<int64_t> s_match,prime;
void scan(int64_t &a,int64_t &b=IX,int64_t &c=IX)
{
	scanf("%lld",&a);
	if(b!=IX)
		scan(b,c);
}
int64_t power(int64_t a,int64_t b)
{
    if(b==0)
        return 1;
    else if(b%2==1)
        return (a*power(a,b-1))%mod;
    int64_t c=power(a,b/2)%mod;
    return (c*c)%mod;
}
void find_prime(int64_t n)
{
	vector<bool> visited(n,1);
	int64_t i,j;
	for(i=2;i<n;i++)
	{
		if(visited[i])
		{
			prime.push_back(i);
			for(j=2*i;j<n;j+=i)
				visited[j]=0;
		}
	}
}
int64_t inverse(int64_t a)
{
    return power(a,mod-2)%mod;
}
int64_t gcd(int64_t a,int64_t b)
{
	if(a<b)
		swap(a,b);
	if(b==0)
	return a;
	return gcd(b,a%b);
}
bool K_matcher(string p,string q)
{
	int64_t i,k,num[N],flag=0;
	num[0]=-1;
	k=-1;
	for(i=1;i<p.size();i++)
	{
		while(k>-1&&p[k+1]!=p[i])
			k=num[k];
		if(p[k+1]==p[i])
			k++;
		num[i]=k;
	}
	//for(i=0;i<p.size();i++)
	//	cout<<num[i]<<" ";
	//cout<<endl;
	k=-1;
	for(i=0;i<q.size();i++)
	{
		while(k>-1&&p[k+1]!=q[i])
			k=num[k];
		if(p[k+1]==q[i])
			k++;
		if(k==p.size()-1)
		{
			s_match.push_back(i-p.size()+1);
			//cout<<"match found at"<<i-p.size()+1<<endl;
			k=num[k];
			flag=1;
		}
	}
	if(flag)
		return 1;
	else
		return 0;

}
/*
{a,b,c},{i,j,k},{n,m,l},{"p,q"},{s},{v,u,w},{"x,y"},{"l,r"},num,dp,ch,mapping,iter(iterator),vertices,edges,visited,mini,maxi,on,off,all,light,dark,
good,bad,{val,value},{sum,ans},hate,give,take,{minutes,hours,days,months,years}reach,{"fuck,suck"},punish,hate,revenge,plot,money,screwed,
sex,normal,flag,count(local_variable)
*/

vector<int64_t> v,u;
bool func(int64_t a,int64_t b)
{
	return v[a]<v[b];
}
int main()
{
	int64_t n,i,a;
	scan(n);
	for(i=0;i<n;i++)
	{
		scan(a);
		v.push_back(a);
		u.push_back(i);
	}
	sort(u.begin(),u.end(),func);
	for(i=0;i<u.size();i++)
		cout<<u[i]+1<<" ";
	cout<<endl;
}
