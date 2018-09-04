#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
 
 int main()
 { int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   vector<int>A,B;
   A.push_back(0);
   B.push_back(0);
   for (int i=0;i<n;i++)
   { if (s[i]=='a')  B.push_back(i+1);
     else A.push_back(i+1);
   }
   
   if (B.size()<=k+1 || A.size()<=k+1) { cout<<n; return 0;}
   int ia=0,ib=0;
   int ka=k,kb=k;
   int a=0;
   bool p=true;
   for (int i=0;i<s.size();i++)
   { if (s[i]=='b' && kb>0) { a=i+1; kb--;}
    // if (p==true && kb==0 && s[i]=='b') { a=i+1; p=false;}
     else if (s[i]=='b' && kb==0) { a=max(a,i-A[ia]); ia++;}
    // a++;
       
   }
   a=max(a,n-A[ia]);
   
   p=true;
   int b=0;
   for (int i=0;i<s.size();i++)
   { if (s[i]=='a' && ka>0) { b=i+1; ka--;}
    // if (p==true && ka==0 && s[i]=='a') {b=i+1; p=false;}
     else if (s[i]=='a' && ka==0) { b=max(b,i-B[ib]); ib++;}
    // b++;
      // cout<<b<<" ";
   }
      b=max(b,n-B[ib]);
  // cout<<a<<" "<<b<<" ";
   cout<<max(a,b);
 }
     