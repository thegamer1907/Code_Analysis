#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll z[1000005];
void z_function()
{
	ll i;
	for(i=1;i<s.length();i++)
	{
		ll k=z[i-1];
		while(k>0 && s[k]!=s[i])
		k=z[k-1];
		if(s[k]==s[i])
		z[i]=k+1;
	}
}
main()
{
	cin>>s;
	z_function();
	ll i,f=0;
	ll l=s.length();
    ll j=s.length()-1;
    //for(i=0;i<l;i++)
  //  cout<<z[i]<<" ";
	//cout<<"\n";
    if(z[j])
    {
    	for(i=0;i<l-1;i++)
    	if(z[i]==z[j])
    	break;
    	if(i<l-1)
    	{
		  for(i=0;i<z[j];i++)
    	   cout<<s[i];
        }
        else
        {
        	j=z[z[j]-1];
        	if(j)
        	{
        		for(i=0;i<j;i++)
        		cout<<s[i];
			}
			else
			cout<<"Just a legend\n";
		}
   }
   else
   cout<<"Just a legend\n";
	
}