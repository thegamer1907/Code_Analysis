#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb push_back
 
 
 
int main() 
{ 
    
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);  
    ll n,m,k,i,j,q,r,c=0,count=0;
    cin>>n>>m>>k;
    ll a[m];
    for(i=0;i<m;i++)
    cin>>a[i];
    ll co=0,p;
    i=0;
    while(i<m)
    {
      p=ceil((a[i]-c)/(1.0*k));
      q=p*k;
      co=0;
    for(j=i;j<m && j<i+k;j++)
    {
        if((a[j]-c)<=q)
        co++;
        else
        break;
    }
        c+=co;
        count++;
        i+=co;
    }
      cout<<count<<endl;
    
    
return 0;
}