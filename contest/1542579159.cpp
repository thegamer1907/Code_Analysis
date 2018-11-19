#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define mp make_pair
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define endl '\n'
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define test(t) int t;cin>>t;while(t--)
ll poww(ll x,ll y) {ll res=1;x%=mod; assert(y>=0); for(;y;y>>=1){if(y&1)res=res*x%mod;x=x*x%mod;}return res;}
using namespace std;

int main(){

    fast;
    //freopen("input.txt", "r+", stdin);
	//freopen("output.txt", "w+", stdout);
    double a[4]={0};
    int b[70]={0},i,j,k,h,m,s,t1,t2;
    cin>>a[0]>>a[1]>>a[2]>>t1>>t2;
    t1=(t1*5)%60;
    t2=(t2*5)%60;
    a[1]+=a[2]/60;
    a[0]+=a[1]/60;
    a[0]*=5;
    if(a[0]>=60)
        a[0]-=60;
    sort(a,a+3);
    if((t1>=a[0]&&t1<=a[1]&&t2<=a[1]&&t2>=a[0])||(t1>=a[1]&&t1<=a[2]&&t2<=a[2]&&t2>=a[1]))
      cout<<"YES";
      else if((t1<=a[0]||t1>=a[2])&&(t2>=a[2]||t2<=a[0]))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
