#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,i,e,f,g,n,k,l;
string s;
map <string,int> m;
int main()
{
           cin>>n>>e;
           for(i=1;i<=n;i++)
           {
           cin>>s;
           m[s]++;
           }
           for(i=1;i<=e;i++)
           {
           cin>>s;
           m[s]++;
           if(m[s]==2) k++;
           }
           //cout<<k<<" "<<(e-k)-(n-k)<<endl;
           if((n-k)+k/2+k%2>(e-k)+k/2) cout<<"YES";
           else cout<<"NO";
         //  if(k%2==1 && (e-k)-(n-k)<=1) cout<<"YES";
         //  else if(k%2==1) cout<<"NO";
     //      else if(k%2==0 && (n-k)-(e-k)<=1) cout<<"NO";
         //  else if(k%2==0) cout<<"YES";
}