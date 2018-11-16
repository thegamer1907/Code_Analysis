#include<bits/stdc++.h>
#define ve vector
using namespace std;

void solve(ve<int> v, int k)
{
	int y=0;
	for(auto a:v)
		if(a==1)
			y=1;
	if(y==0)
	{
		cout<<v.size()-1<<endl;
		return;
	}
	int sum=0,ans=0;
	for(auto a:v)
		if(sum + a > 0)
		{
			sum += a;
			ans = max(ans,sum);
		}
		else
			sum =0;
	cout<<ans+k<<endl;
}

int main()
{
	int n,k=0;
	cin >> n;
	ve<int> v(n);
	for(auto &a:v)
	{
		cin >> a;
		if(a) k++;
	}
	ve<int> w(n);
	for(int i =0;i<n;i++)
		if(v[i]==0)
			w[i]=1;
		else
			w[i]=-1;
	solve(w,k);
	return 0;
}