#include<bits/stdc++.h>
using namespace std;

long long int solve()
{
	long long int n,m,k,l;
	cin >>n>>m>>k;
	long long int a[m];
	for(int i =0 ;i < m ;i++)
		cin >>a[i];
	long long int last=0;
	long long int cnt=0,d=0;
	l=k;
	for(int i = 0; i  < m ;)
	{
		long long int p=(a[i]-1-last)/k ;
		long long int st=(p)*k;
		st+=last ;
		while(a[i]<= st+k)
			i++;
		cnt++;     
		last=i;                  
		//cout<<p<<" "<<i<<endl;
	}
	return cnt;
}

int main()
{
	ios:: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cout<<solve();
	
	return 0;
}