#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lli long long int
#define ulli unsigned long long int
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define pop_front()
#define lb lower_bound
#define ub upper_bound
#define loopl(i,a,b) for(lli i=a;i<b;i++) 
#define loop(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
#define inf 7+1e18
#define eps 0.000001
#define endl '\n'
using namespace std ;

int gcd(int a, int b)
{
    if (a == 0)   return b;
    if(b==0)      return a;
    if (a == b)   return a;
    if (a > b)    return gcd(a%b, b);
    return gcd(a, b%a);
}

int main()
{
  /////////////////////////////////////////////	
  fastio;
  /////////////////////////////////////////////
  
  lli n;
  cin>>n;
  lli a[n];
  loopl(i,0,n) cin>>a[i];
  sort(a,a+n);
  lli count=0,j=n-1,index=(n/2)-1 ;
  
  for(lli i=index;i>=0;i--)
  {
  	if(2*a[i] <= a[j] ) 
  	{
  		count++; j--;
	}
  }
  cout<<n-count<<endl;
}
