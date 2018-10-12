#include<bits/stdc++.h>
#define ll long long 
#define hell 1000000007
#define F first
#define re 15000000
#define S second
ll a[re+1]={0},b[re+1]={0};
using namespace std;
ll gcd(ll a,ll b)
{
	if (a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
void palindrome(string s)
{
	int i =0;
	int j =s.size()-1;
	while(i<j)
	{
		if(s[i]!=s[j])
			return ;
		i++;
		j--;
	}
	cout<<s;
	exit(0);
}
int recursive(int n,int a[])
{
	int x =1;
	if(a[n]!=0)
		return a[n];
	if(n<10)
		return n;
	while(n!=0)
	{
		if(n%10 !=0)
			x =x * (n%10);
		n=n/10;
	}
	return recursive(x,a);
}
void primeFactors(ll n , map<ll,ll> &m) 
{ 
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        m[2]++;
        n = n/2; 
    } 
  
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (n%i == 0) 
        { 
            m[i]++; 
            n = n/i; 
        } 
    } 
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) 
        m[n]++; 
} 
int main()
{
	
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	for(int i =1;i<=n;i++)
	{
		cin>>a[i];

	}
	ll sum1=0;
	for(int i =1;i<=n;i++)
	{
		sum1 = sum1 +a[i];

	}
	if(sum1 <=k)
	{
		cout<<n;
		exit(0);
	}
	int ans = 0;
	ll sum =0;
	ll x = 0;
	for(int i =1;i<=n;i++)
	{
		
		for(int j = x+1;j<=n;j++)
		{
			sum = sum +a[j];
			if(sum>k)
			{
				ans = max(ans,j-i);
				x =j-1;
				sum = sum -a[j];
				//cout<<"Ans";
				break;
			}
			else if(sum <=k && j==n)
			{
				//cout<<"Ans";
				ans = max(ans,j-i+1);
				x= j;
				break;
			}


		}
		sum = sum - a[i];
	}
	cout<<ans;


}