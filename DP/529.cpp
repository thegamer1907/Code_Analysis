#include<bits/stdc++.h>
#define ll long long
#define iost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main()
{
    iost;
   string s;
   cin>>s;
   ll a[s.size()];
   ll i,m,l,r,p;
   a[0]=0;
   for(i=1;i<s.size();i++)
   a[i]=a[i-1]+(s[i]==s[i-1]);
   cin>>m;
   while(m--)
   {
   	cin>>l>>r;
   	p=a[r-1]-a[l-1];
   	cout<<p<<endl;
   }
   
}

