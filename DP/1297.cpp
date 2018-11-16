#include<bits/stdc++.h>
using namespace std;
int n,i,j,sum=0,k,b;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
      {
        cin>>j;
        sum+=j;
        k+=1-j-j;
        if (k<0) k=0;
        if (b<k) b=k;
      }
    if(b) cout<<sum+b;
    else cout<<sum-1;
    return 0;
}