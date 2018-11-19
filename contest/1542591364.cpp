//Perfection is not attainable,but if we chase perfection we can catch excellence.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define DHOKHA ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
   DHOKHA;
   string s;
   cin>>s;
   ll n;
   cin>>n;
   string s1;
   ll h=-1;
   ll p=-1;
   while(n--)
   {
   	cin>>s1;
   	if(s1[0]==s[1])
   	{
   		h=0;
   	}
   	if(s1[1]==s[0])
   	{
   		p=1;
   	}
   	if(s1==s)
   	{
   		cout<<"YES";
   		return(0);
   	}
   	
   }
   if(h!=-1 && p!=-1)
   {
   	cout<<"YES";
   	return(0);
   }
   cout<<"NO";
}

