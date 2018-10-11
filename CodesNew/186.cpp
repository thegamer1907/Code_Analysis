#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,t,sum,y,i,x,j,pos,last;
   vector <long long int> v,v1,f;
   vector <long long int>::iterator it;
   cin>>n>>t;
   for(i=0; i<n; i++)
   {
       cin>>x;
       v.push_back(x);
   }
   v1.push_back(v[0]);
   for(i=1; i<n; i++)
   {
   	   v1.push_back(v1[i-1]+v[i]);
   }
   last=0;
   for(i=0; i<n; i++)
   {
   	   if(i>0)
   	      last=v1[i-1];
   	   pos = lower_bound(v1.begin(), v1.end(), last+t)- v1.begin();
   	   if(v1[pos]>last+t)
   	      pos--;
   	   if(pos==n)
   	      pos--;
   	    f.push_back(pos+1-i);
   }
   it = max_element(f.begin(), f.end());
   cout<<*it;
}

