#include <bits/stdc++.h>
#define int long long
#define FF first
#define SS second
#define INF INT_MAX
#define MOD 998244353
#define mp make_pair
#define pb push_back
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#define upperlimit 1000001001
#define epsilon 1e-11
#define TEMP 10000001
#define DEV 1e11
#define debug 1e3
#define PRIMESCHECK 11111111
using namespace std;
typedef long long ll;
 void SieveOfErat()   //prec of eratosthenes
{
    
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
 
    for (long long vec=2; vec*vec<=1000000; vec++)
    {
        
        if (prime[vec] == true)
        {
            
            for (long long dd=vec*2; dd<=1000000; dd += vec)
                prime[dd] = false;
        }
    }
}
ll gcd(ll aa,ll id2)
{
    if(aa==0)
    {
        return id2;
        
    }
    else
    return gcd(aa%id2,id2);
}
struct vect
{   struct vect *foll; 
    ll calc;
    struct vect *succ;
    
};
int a[500005],b[500005];
int t[500005];
signed main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i]-i;
		if(b[i]<0)
			b[i]=0;
		else if(b[i]%n==0)
			b[i]=b[i]/n;
		else
			b[i]=(b[i]/n)+1;
	}
	for(int i=0;i<n;i++)
	{
		t[i]=i+(n*b[i]);
	}
	int min,p=0;
	min=t[0];
	for(int i=0;i<n;i++)
	{
		if(min>t[i])
		{
			min=t[i];
			p=i;
		}
	}
	cout<<p+1<<endl;
	return 0;
}