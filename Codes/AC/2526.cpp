#include<iostream>
#include<cstdio>
#include<cstring>
#include<fstream> 
#include<cmath> 
#include<string> 
#include<vector> 
#include<algorithm>
#include<string> 
#define ll long long
using namespace std;
const int maxn=1e7+5;
int sum[maxn],cnt[maxn],m,l,r,n; 
bool not_prime[maxn];
void init()
{
	for(int i=2;i<maxn;i++)
	{
		if(!not_prime[i])
		{
			sum[i]+=cnt[i]; 
			for(int j=i*2;j<maxn;j+=i)
			{
				not_prime[j]=true; 
				sum[i]+=cnt[j]; 
			} 
		} 
	} 
} 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a; 
		cin>>a;
		cnt[a]++; 
	}
 	init();
	for(int i=1;i<maxn;i++)sum[i]+=sum[i-1];
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
	/*	if(l>maxn-5)
		{
			printf("0\n");continue;
		}
		r=r>maxn-5?maxn-5:r;*/
		if(l>maxn)l=maxn-1;
		if(r>maxn)r=maxn-1;
		cout<<sum[r]-sum[l-1]<<endl;
	} 
	return 0; 
} 