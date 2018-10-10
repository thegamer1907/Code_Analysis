#include <bits/stdc++.h>
#define taskname "1006C"
using namespace std;

int64_t n,res=0,a[200005];
map<int64_t,int64_t> F;

void Code()
{
	cin>>n;
	for(int64_t i=1;i<=n;i++)
		cin>>a[i];
	int64_t sum1=0,sum2=0;
	for(int64_t i=1;i<=n;i++)
	{
		sum1+=a[i];
		F[sum1]++;
	}
	for(int64_t i=n;i>=1;i--)
	{
		F[sum1]--;
		sum1-=a[i];
		sum2+=a[i];
		if(F[sum2]>0)
			res=sum2;
	}
	cout<<res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	#if DEBUG
	freopen(taskname".inp","r",stdin);
	freopen(taskname".out","w",stdout);
	#endif
	Code();
	#if DEBUG
	PAUSE();
	#endif
}
