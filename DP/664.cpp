#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   cin.sync_with_stdio(false);
   string s;
   cin>>s;
   int m;
   int ar[s.length()+1]={0};
   cin>>m;
   vector<int>v;
   for(int i=0;i<s.length()-1;i++)
     {
       if(s[i]==s[i+1])
	 ar[i+1]+=1;
       if(i>=1)
	 ar[i+1]+=ar[i];
     }
   for(int i=0;i<m;i++)
     {
       int l,r;
       cin>>l>>r;
       v.push_back(ar[r-1]-ar[l-1]);
     }
   for(int i=0;i<m;i++)
     cout<<v[i]<<endl;
   return 0;
}

   
   
   
