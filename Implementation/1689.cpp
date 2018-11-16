#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#define Fi(a,b) for (ll i = a ; i<=b ;i++ )
#define Fj(a,b) for (ll j = a ; j<=b ;j++ )
#define Fk(a,b) for (ll k = a ; k<=b ;k++ )
#define pb push_back
#define BR cout<<endl
#define KALA ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mod 1000000007
#define I cin>>
#define O cout<<
#define XXX return 0
using namespace std;

int main()
{
   KALA;
   ll t;
   //I t;
   t=1;
   string s;
   while(t--)
   {
     I s;
     char tmp=s[0];
     ll c=0;
     ll ans=INT_MIN;
     Fi(0,s.length()-1)
     {
     	if(tmp==s[i])
			c++;
		else
		{
			tmp=s[i];
			c=1;
		}
	        if(c>ans)
			ans=c;
     }
     if(ans>=7)
		O "YES";
	 else
		O "NO";
	BR;
   }
	XXX;
}

