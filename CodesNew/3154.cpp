#include<bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i < r; i++)
const int N = 300005;
int n,k,ans,s,e,a[N],j=1,t;
int main()
{
	cin>>n>>k;
	rep(i,1,n+1)scanf("%d",a+i);
	rep(i,1,n+1)
	{
		if(a[i] == 0)k--;
		t++;
		if(k<0)
		{
			while(k<0)
			{
				if(a[j]==0)k++;
				j++;
				t--;
			}
		}
		//cout<<i<<" "<<t<<endl;
		if(t>ans)
		{
			s = j, e=i;
			ans = t;
		}
	}
	cout<<ans<<"\n";
	rep(i,1,n+1)
	{
		if(i>=s && i<=e)printf("1 ");
		else printf("%d ",a[i]);
	}

}