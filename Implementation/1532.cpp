#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll m=1000000007;
int main() 
{
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    ll n,a,b,c,co,k,i,j,f=0;
    string s;
    cin>>s;
    c=0;
    for(i=0,j=0;i<s.size();i++)
    {
       if(s[j]==s[i])
       c++;
       else
       {
           j=i;
           c=1;
       }
       if(c==7)
       {
           cout<<"YES";
           return 0;
       }
        
    }
    cout<<"NO";
   
	return 0;
    
    
    
}