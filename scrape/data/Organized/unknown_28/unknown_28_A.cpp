#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k,i,ans=0,x,tmp=0,prev,r,z,c;
    cin>>n>>m>>k;
    long long int a[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    r=0;
    z=1;
    c=0;
    for(i=1;i<m;i++)
    {
      if((a[i]-1-r)/k!=(a[i-1]-1-r)/k)
        {
          r+=z;
          c++;
          z=1;
        }
      else
      z++;
    }
    cout<<c+1<<"\n";
    return 0;
}