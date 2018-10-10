#include <bits/stdc++.h>
#define ll long long
#define mn 10000000
using namespace std;
std::vector<int> prime;
bool isprime[mn+1];
ll fp[mn+1];
ll v[mn+1];
void seive(int n)
{
	fp[0]=0;
	fp[1]=0;
	memset(isprime,true,sizeof isprime);
	isprime[2]=true;
	for(int i=2;i<=n;i++)
	{
		if(isprime[i])
		{
			if(v[i])
				fp[i]+=v[i];
			for(int j=2*i;j<=n;j+=i)
			{
				if(v[j])
				fp[i]+=v[j];
				isprime[j]=false;
			}
		}
	}
}
int main() {
	memset(fp,0,sizeof fp);
	memset(v,0,sizeof v);	
	int n;
	int k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		v[k]++;
	}
	seive(mn);
	for(int i=1;i<=mn;i++)
		fp[i]+=fp[i-1];
	int m,l,r;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		{
			scanf("%d %d",&l,&r);
			printf("%lld\n",fp[min(mn,r)]-fp[min(mn,l-1)]);
		}
	return 0;
}