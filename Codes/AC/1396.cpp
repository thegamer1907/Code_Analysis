#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 ll n,s,x;
 vector<ll>v;
 
 ll f( ll k)
 { ll p=0;
   vector<ll>u;
   
   for (int i=0;i<n;i++)
   u.push_back(v[i]+(i+1)*k);
   
   sort(u.begin(),u.end());
   
     for (int i=0;i<k;i++)
     p+=u[i];
    
    return p;
 }
 
 ll bs()
 { ll sup=n;
   ll inf =0;
   ll mid=0;
   while(sup>inf)
   {  mid=(sup+inf+1)/2;
     if (f(mid)>s) sup=mid-1;
     else  inf=mid;
     
    }
    return inf;
   }
   
 
 int main()
 {  cin>>n>>s;
    
  
    for (int i=0;i<n;i++)
    { cin>>x;   v.push_back(x);}
    
    int r=bs();
    cout<<r<<" "<<f(r);
 }