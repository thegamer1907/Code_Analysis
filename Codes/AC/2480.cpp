
#include<bits/stdc++.h>
#define T() int t; cin>>t; while(t--)
#define rep(i,start,lim) for(long long i=start;i<lim;i++)
#define repd(i,start,lim) for(long long i=start;i>=lim;i--)
#define ll long long
#define pb push_back
#define f first
#define s second
#define vlld vector<long long> 
#define YES printf("YES\n")
#define NO printf("NO\n")
#define MAX 100000000000000
#define N 10000001

using namespace std;

int minPrime[N + 1],freq[N];

void factorise(int n)
{
	int last = 0;
	while(n!=1)
	{
		if(minPrime[n] != last)
		freq[minPrime[n]]++;
		last = minPrime[n];
		n = n/minPrime[n];
	}
}

int main()
{
	for (int i = 2; i * i <= N; ++i) {
	    if (minPrime[i] == 0) {         //If i is prime
	        for (int j = i * i; j <= N; j += i) {
	            if (minPrime[j] == 0) {
	                minPrime[j] = i;
	            }
	        }
	    }
	}
	for (int i = 2; i <= N; ++i) {
	    if (minPrime[i] == 0) {
	        minPrime[i] = i;
	    }
	}
	
	int m;
	scanf("%d",&m);
	int a[m];
	rep(i,0,m)
	{
		scanf("%d",&a[i]);
		factorise(a[i]);
	}
	rep(i,1,N)
	freq[i] += freq[i-1];
	
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		if(x > N-1)
		x = N-1;
		if(y > N-1)
		y = N-1;
		printf("%d\n",freq[y]-freq[x-1]);
	}
}



