#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
 ll n,m,k;
 cin>>n>>m>>k;
 
 ll *arr=new ll[m];
 for(ll i=0;i<m;i++)
 cin>>arr[i];
 ll mv=0;ll pt=1;
 ll t=0;ll cnt=0;
 ll j=0;
 while(j<m)
 {
    while(((arr[j]+k-1-t)/k)==pt&&j<m)
    {
        cnt++;
        j++;
    }
    if(cnt==0)
    {
        pt++;
    }
    else 
    {
        t+=cnt;
        cnt=0;
        mv++;
        
    }
 }
 cout<<mv<<endl;
 
	return 0;
}