#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll one=0,two=0,lot=0;
    for(ll i=0;i<s.length();i++)
    {
    //	cout<<"wfw";
    	if(s[i]=='A' && s[i+1]=='B' && one==0)
    	{
    		if(s[i+2]=='A')
    		{
    			lot++;
    			i=i+2;
    			continue;
    		}	
    //		if(i==0)
    //		{
    		one++;
    		i++;
    //		}
    //		else if(i>0 && s[i-1]!='B')
    //		{
    //			one++;
    //			i++;
    //		}
   // 		else if(i>0 && s[i-1]=='B')
    //		{
   // 			
    //		}
    		continue;
    	}
    	if(s[i]=='B' && s[i+1]=='A' && two==0)
    	{
    		if(s[i+2]=='B')
    		{
    			lot++;
    			i=i+2;
    			continue;
    		}
    //		if(i==0)
    //		{
    			two++;
    			i++;
    //		}
    //		else if(i>0 && s[i-1]!='A')
    //		{
    //			two++;
    //			i++;
    //		}
   // 		else if(i>0 && s[i-1]=='B')
    //		{
   // 			
    //		}
    	}
    }
    if((one==1 && two==1) || (one==1 && lot>=1) || (two==1 && lot>=1) || lot>=2)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
}