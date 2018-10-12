#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define x first
#define y second
typedef  pair<int,int> pii;
typedef vector<pair<int, int>> vpii;


 

int main()
{   
    int n,m; cin>>n>>m;
    int ma=0,s=0,a[n];
    for(int i=0;i<n;i++)
    
    {cin>>a[i];
        ma=max(ma,a[i]);
        s+=a[i];
    }
    int r=n*ma-s;
    if(r>m)
    cout<<ma<<" "<<ma+m;
    else 
    cout<<ceil((m-r)*1.0/n)+ma<<" "<<ma+m;
  
}
