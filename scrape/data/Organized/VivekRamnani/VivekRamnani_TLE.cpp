#include<iostream>
#include<math.h> 
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
using namespace std;
typedef long long int lli;
lli mod=1000000007;
vector < lli> primes;

void Sieve(lli n) 
{ 
    bool prime[n+1];
	for(lli i=0;i<n+1;++i)
		prime[i]=true;
    for (lli p=2;p*p<=n;++p) 
    {
        if (prime[p] == true) 
        {  
            for (lli i=2*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }  
    for(lli p=2; p<=n; p++) 
       if (prime[p]) 
		primes.push_back(p);  
}
lli gcd(lli a,lli b)  
 {
    if(b>a)
        swap(a,b);
    if (a%b==0)  
        return b;  
    else 
        return gcd(a%b,b);  
 }
lli lcm(lli a,lli b)
{
    return (a*b)/gcd(a,b);    
}
lli power(lli x,lli y,lli m)   
{ 
    lli res = 1; 
    x=x%m;   
    while (y > 0) 
    {  
        if (y%2==1) 
            res =(res*x)%m;  
        y=y/2; 
        x=(x*x)%m; 
    } 
    return res; 
}
bool sortcol( const vector<lli>& v1, const vector<lli>& v2 ) 
{ 
	return v1[0] < v2[0]; 
}
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	lli n,m,k;
	cin>>n>>m>>k;
	lli arr[m];
	lli removed=0;
	for(lli i=0;i<m;++i)
	{
		cin>>arr[i];
	}
	lli flag=0;
	lli start=k,steps=0;
	for(lli i=0;i<m;++i)
	{
		if(arr[i]-removed<=k)
			flag=1;
		else
		{
			if(flag)
			{
				removed=i;
				steps++;
			}
			if(!flag)
				k+=start;
			i--;
			flag=0;
		}
		//cout<<steps<<endl;
	}
	if(flag)
	    steps++;
	cout<<steps<<endl;
	
	
}