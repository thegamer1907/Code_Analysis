#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define SZ size
using namespace std;
int i,j,k,h,n,m,q,l,a[5],f[17],e[17];
int main()
{
 cin>>n>>k; 
 m=1;
 for(i=1;i<k;i++)
  m*=2;
 for(i=1;i<=n;i++)
  {
   h=m;	l=0;
   for(j=1;j<=k;j++)
    cin>>a[j],l+=a[j]*h,h/=2;
   if(!f[l]) f[l]=1,e[++q]=l;  
  }
 for(i=1;i<=q;i++)
  for(j=1;j<=q;j++)
   if((e[i]&e[j])==0) { cout<<"YES"<<endl; return 0; }
 cout<<"NO"<<endl;  
}