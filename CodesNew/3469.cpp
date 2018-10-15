#include <bits/stdc++.h>
using namespace std;
 
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long
 
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(v) v.begin(),v.end() 

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
 
using namespace std;

/**************************************************************************/
int main()
{
	fastIO;
	ll n,m,i,j,k;
    cin>>n>>m;
    ll A[n+1];
    fo(i,n) cin>>A[i];
    ll max=-1;
    fo(i,n) if(max<=A[i]) max=A[i];
    ll extra=0;
    fo(i,n) extra+=(max-A[i]);
    ll mm=m,mx=max;
    mm-=extra;
    if(mm>0) mx+= mm/n + (mm%n!=0);
    cout<<mx<<" "<<max+m<<endl;
}
/*************************************************************************/ 