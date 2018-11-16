#include<bits/stdc++.h>
using namespace std;
int cum[200000];
int N,p,j,k;

int main()
{
   long long n;
   string s;
   cin>>s;
   s=' '+s;
   for(int i=1;i<s.size()-1;i++) if(s[i]==s[i+1]) cum[i]=1;
   for(int i=1;i<s.size();i++) cum[i]+=cum[i-1];
   cin>>n;
   while(n--)
   {
       int l,r;
       cin>>l>>r;
       cout<<cum[r-1]-cum[l-1]<<endl;
   }




   }

