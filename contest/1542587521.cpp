#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	
string s,s1,s2="";
cin>>s;

int n;
cin>>n;
bool f=0,f1=0,f2=0;
while(n--)
{
	cin>>s1;
  
   if(s1==s)
   f=1;
   else
    {if(s1[1]==s[0])
    f1=1;
    if(s1[0]==s[1])
    f2=1;
   }
    
}
if(f||(f1&&f2))
cout<<"YES";
else
cout<<"NO";

}