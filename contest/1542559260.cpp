#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b,c,m,n,k,a1,b1,d1,c1;
pair <long long,long long> d[100001];
string s;
stack <char> w;
char q;
int main()
{
   cin>>s;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       string s1;
       cin>>s1;
       if(s[0]==s1[1])k=1;
       if(s[1]==s1[0])c=1;
       if(s1==s)k=1,c=1;
   }
   //cout<<k<<" "<<c;
   if(k+c==2)cout<<"YES";
   else cout<<"NO";
}


