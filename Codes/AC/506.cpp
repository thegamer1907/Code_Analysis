#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 210
#define N 5010
#define MAX 400010

using namespace std;

int sum(int k)
{
	int sm = 0;
	while(k > 0)
	{
		sm+=k%10;
		k/=10;
	}

	return sm;
}

int main()
{
	int n=0, k=0;
	cin>>n;
	while(n > 0)
	{
		k++;
		while(sum(k)!= 10)
		{
			k++;
			//cout<<k<<endl;
		}

		n--;
	}

	cout<<k<<endl;
	return 0;
}