#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define INF (long long)1e18
#define MINF (long long)-(1e18)
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
using namespace std;
void Arrdisp(ll A[],ll N)
{
	for(ll i=0;i<N;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
void swap(ll &a,ll &b)
{
 ll tmp=a;
 a=b;
 b=a;
}
int main()
{
	int M,N;
	cin>>M>>N;
	string s1[M],s2[N];
	for(int i=0;i<M;i++)
		cin>>s1[i];
	for(int i=0;i<N;i++)
		cin>>s2[i];
	int cnt1=0,cnt2=0,com=0;
	for(int i=0;i<M;i++)
	{
		int flag=1;
		for(int j=0;j<N;j++)
			if(s1[i]==s2[j])
				flag=0;
		if(flag==1)
		{
			cnt1++;
		}
		if(flag==0)
			com++;
	}
	for(int i=0;i<N;i++)
	{
		int flag=1;
		for(int j=0;j<M;j++)
			if(s1[j]==s2[i])
				flag=0;
		if(flag==1)
			cnt2++;
	}
	cnt1+=ceil(com/2.0);
	cnt2+=floor(com/2.0);
	if(cnt1>cnt2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

