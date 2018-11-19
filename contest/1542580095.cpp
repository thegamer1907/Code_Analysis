#include<bits/stdc++.h>
#define pb push_back
#define ll long long 
#define mp make_pair
#define mod 1000000007
#define MAXN 100008
#define INF 10000000000000
using namespace std;
long long fastpow(long int a,long int b) {
    if(b == 0)
        return 1ll;
    long long ret = fastpow(a, b/2);
    ret = (ret*ret) % mod;
    ret = (ret+mod)% mod;
    if(b%2 == 1)
        ret = (ret*a) % mod;
    ret = (ret+mod)% mod;
    return ret;
}
vector<int>vec[30],vec1[30];
int a[MAXN][5];
int n,k;
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
          cin>>a[i][j];
          if(!a[i][j])
          {
          	vec1[1<<j].pb(i);
          }
		}
	}
	int total = (1<<k)-1;
	for(int mask=0;mask<=total;mask++)
	{
		for(int i=0;i<n;i++)
		{
		   int temp = 0;
           for(int j=0;j<k;j++)
           {
           	 if(a[i][j]){temp|=(1<<j);}
           }
           if(temp==mask)
           {
           	 vec[mask].pb(i);
           }
		}
	}
	bool flag = 0;
	if(!vec[0].empty()){cout<<"YES"<<endl;return 0;}
	else
	{
		for(int mask=0;mask<=total;mask++)
		{
			int setbits = 0;
			for(int j=0;j<k;j++)
			{
				if(mask&(1<<j))
				{
					setbits++;
				}
			}
			if(setbits==1 and !vec[mask].empty() and !vec1[mask].empty())
			{
              //cout<<mask<<"jii"<<vec[mask].size()<<endl;
				flag=1;
			}
			else if(setbits==2 and !vec[mask].empty() and !vec[total-mask].empty())
			{
			        flag=1;
			}
		}
	}
	if(flag){cout<<"YES"<<endl;}
	else{cout<<"NO"<<endl;}
   return 0;
}