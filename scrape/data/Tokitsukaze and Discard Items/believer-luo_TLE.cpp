#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxn (int)1e5+10
map<double ,ll> mp;
ll quan[maxn],pre[maxn],tree[maxn];
ll temp[maxn],dis[maxn],val[maxn];
ll n,m,a,l;
int main()
{
    long long ans=0,sum=0,n,temp=0,m,k;
    cin>>n>>m>>k;
    long long flag=1;
    long long pre=0;
    for(long long i=1;i<=m;i++)
    {
    	long long a;
    	cin>>a;
    	if(pre==a)  continue;
    	if(i==1)
		{
		     flag=a/k+1;	
		} 
    	if(a-temp<=flag*k)
    	{
    		sum++;
		}else
		{
			ans++;
			temp+=sum;
			sum=1;
			if(a-temp>flag*k)
			{
				flag++;
				while(a-temp>flag*k) flag++;
				temp--;
			}
		}
		pre=a;
	}
	cout<<++ans<<endl;
	return 0;
}