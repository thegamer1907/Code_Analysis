#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(),c.end()
#define loop(i,a,b) for(i=a; i<b; i++)
#define tests int tt; cin>>tt; while(tt--)
#define MOD 1000000007
#define INF INT_MAX

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,i,j,l,r;
    ll ls=0,rs=0,mx=0;
    cin>>n;
    int a[n];
    loop(i,0,n) cin>>a[i];
    l=0;r=n-1;
    ls=a[0]; rs=a[n-1];
    while(l<r){
        if(ls==rs){
            mx=max(mx,ls);
            l++;r--;
            ls+=a[l]; rs+=a[r];
        }
        else if(rs>ls){ l++; ls+=a[l];}
        else { r--; rs+=a[r];}
    }
    cout<<mx;

    return 0;
}