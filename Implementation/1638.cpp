#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define lli long long int 
#define ull unsigned long long
#define mod 1000000007
#define endl "\n"
#define GIO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{ GIO;
  string s;
  cin>>s;
  ll k;
  for(ll i=0;i<s.length();i++)
  {    ll j=i;
        k=6;
  	while((s[j]==s[j+1])&& (k!=0))
  	{         k--;
  	          
  		j++;
  	}
  	//cout<<k<<" ";
  	if(k==0)
  	{    
  		cout<<"YES"<<"\n";
  		return 0;
  	}
  	
  }
   cout<<"NO";
return 0;
}


