#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int sz=n;
string s;
while(n--)
{
cin>>s;
if(!mp[s])
mp[s]=1;
}
int df=m,com=0;
while(m--)
{
cin>>s;
if(!mp[s])
{mp[s]=2;
}
else if(mp[s]==1)com++;
}
if(sz<=df&&com%2==0)
cout<<"NO";
else if(sz>=df&&com%2!=0)
cout<<"YES";
else if(sz>df)cout<<"YES";	
else cout<<"NO";


	return 0;
}