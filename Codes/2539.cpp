#include <bits/stdc++.h>
    #include<string.h>
    using namespace std;
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define Max(x,y,z) max(x,max(y,z))
    #define Min(x,y,z) min(x,min(y,z))
    #define fr(i,s,e) for(i=s;i<e;i++)
    #define rf(i,s,e) for(i=s-1;i>=e;i--)
    #define pb push_back
    #define eb emblace_back
    #define mp make_pair
    #define ff first
    #define ss second
    #define ll long long
    #define trace1(x)                cerr<<#x<<": "<<x<<endl
    #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
    #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
    #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
    #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
    #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
    #define vl vector<long long>
     
    #define vi vector<int> 
    #define vii vector< vector<int> >
    #define vll vector< vector<long long> >
    #define vpi vector< pair<int,int> >   
    #define vpl vector< pair<ll,ll> >   
    typedef pair<pair<int, int>,int> P;
     
     
    bool less_vectors(const vector<int>& a,const vector<int>& b) 
    {
       return a.size() > b.size();
    }
     
    int gcd(int a,int b)
    {
    	if(a%b==0)
    		return b;
    		else
    			return gcd(b,a%b);
    }
  	
    int main()
    {
    	IOS;
		int n;
		cin>>n;
		vi v(n);
		vi f(1e7+1,0);
		vi cc(664581,0);
		for(int i=0;i<n;i++)
			{cin>>v[i];
			f[v[i]]++;
			}

					
		vi isPrime(1e7,1);
		vi p;
		map<int,int> m;
		ll c=1;
		for(int i=2;i<=1e7;i++)
		{
			if(isPrime[i]==1)
			{
				m[i]=c;
			c++;
			p.pb(i);
			for(int j=2;j*i<=1e7;j++)
			{
				isPrime[i*j]=0;
				if(f[i*j]>0)
				{
					cc[m[i]]+=f[i*j];
				}
					
			}
			if(f[i]>0)
				cc[m[i]]+=f[i];
			}
		}
		p.pb(1e7+1);
		 c=0;
		for(int i=0;i<664581;i++)
		{
			c+=cc[i];
			cc[i]=c;
			
		}
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			int l,r;
			cin>>l>>r;
			int lu=lower_bound(p.begin(),p.end(),l)-p.begin()+1;;
			int uu=upper_bound(p.begin(),p.end(),r)-1-p.begin()+1;
			//trace4(lu,uu,cc[lu-1],cc[uu]);
			cout<<cc[uu]-cc[lu-1]<<endl;;
		}
		
		
		
		
		
    	return 0;
     
    } 