#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	#include<string.h>
	#include<algorithm>
	
	using namespace std;
	
	#define ll long long
	#define D double
	#define ff first
	#define ss second
	#define FOR(a,n) for(i=0;i<n;i++){	cin>>a[i];}
	#define pb push_back
	#define INF 1000000000
	
	vector< vector<ll> > v;
	vector<bool> th(1010),ch(1010);

	 bool isPrime(int n)
		{
		    
		    if (n <= 1)  return false;
		    if (n <= 3)  return true;
		    
		    if (n%2 == 0 || n%3 == 0) 
		    	return false;
		 
		    for (int i=5; i*i<=n; i=i+6)
		    {
		        if (n%i == 0 || n%(i+2) == 0)
		           return false;
		    }
		    
		    return true;
		}
	
	void swap(char a,char b)
	{
		char t;
		t=a;
		a=b;
		b=t;
	}
	
	ll fact(ll n)
	{
		if(n<=1)
		return 1;
		else
		return n*fact(n-1);
	}
	
	ll comb(ll n, ll k) 
{ 
    ll res = 1; 
  
     
    if ( k > n - k ) 
        k = n - k; 
  
    
    for (ll i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
	
	ll GCD(ll a,ll b)
	{
		if(b==1)
		return 1;
		else
		return GCD(b,a%b);
	}
	
	ll digSum(ll n)
	{
		ll c=0;
		while(n>0)
		{
			ll x=n%10;
			c=c+x;
			n=n/10;
		}
		return c;
	}
	
	bool DFS(ll n)
	{	bool ch[1010];
		stack<ll> s;
		ll ans=0;
		ch[n]=true;
		s.push(n);
		if(th[n]==true)
		ans++;
		while(s.size()>0)
		{	
			ll x=s.top();
			s.pop();
		cout<<"X";
			for(ll i=0;i<v[x].size();i++)
			{
				if(ch[v[x][i]]==false)
				{	
					
					s.push(v[x][i]);
					ch[v[x][i]]=true;
					if(th[v[x][i]]==true)
					ans++;
					if(ans>=2)
					{
						return false;
					}
				}
			}
		
		}
		return true;
	
	}
	
		queue<int> q;
	void BFS(ll n)
	{
		ll i,le[n+1];
		q.push(n);
		le[n]=0;
		ch[n]=true;
		
		while(q.size()>0)
		{
			ll x=q.front();
			q.pop();
			
			for(i=0;i<v[x].size();i++)
			{
				if(ch[v[x][i]]==false)
				{
					q.push(v[x][i]);
					ch[v[x][i]]=true;
					le[v[x][i]]=le[x]+1;
					
				}
			}
		}
		
		
	}
	
ll count(ll n)
	{
		ll c=0,k=n;
		
		while(k>0)
		{
			ll x=k%10;
			c=c+1;
			k=k/10;
			
		}
		return c;
		}	

D area(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3)
{
	return abs((D)((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)))/(D)(2));
                
}

bool isBin(ll n)
{
	while(n>0)
	{
		ll x=n%10;
		if(x>1)
		return false;
		n/=10;
	}
	return true;
}
ll ans[1001500]={0};
void totient(ll n)
{
    
    for(ll i=0;i<=n;i++)
    ans[i]=i;
    for (int p=2; p<=n; p++) 
    { 
        
        if (ans[p]==p) 
        { 
            ans[p]=p-1; 
            for(ll i=2*p;i<=n;i+=p) 
            { 
               ans[i]=((ans[i]*(p-1))/p); 
            } 
        } 
    }
}


ll near(ll n)
{
	ll i=n-1,j=n+1,c=0,d=0;
	
	while(1)
	{
		if(isPrime(i)==true)
		return i/2;
		if(isPrime(j)==true)
		return j/2;
		i--;j++;
	}
	
}

	int main()
	{
		ll n,t,i;
		cin>>n>>t;
		string s;
		cin>>s;
		ll c=0;
		for(i=0;i<n-1;i++)
		{
			if(s[i]=='B' && s[i+1]=='G')
			c++;
		}
		
		if(c==0)
		{
			cout<<s;
			return 0;
		}
		
		while(t--)
		{	i=0;
			while(i<n-1)
			{
				if(s[i]=='B' && s[i+1]=='G')
				{
					char temp=s[i];
					s[i]=s[i+1];
					s[i+1]=temp;
					i+=2;
				}
				else
				{
					
					i++;
				}	
			}
		
		}
		cout<<s;	
	}
