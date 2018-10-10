//Amey Patel
#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define test(t) int t;cin>>t;while(t--)typedef int MyCustomType;
#define all(z) z.begin(),z.end()
#define arr(a,n) int a[n];for(int i=0;i<n;i++)cin>>a[i];
#define bs int binarySearch(int low,int high,int key){while(low<=high){int mid=(low+high)/2;if(a[mid]<key) low=mid+1;else if(a[mid]>key) high=mid-1;else return mid;}return -1;}
#define eb emplace_back
#define mp make_pair
#define endl '\n'
#define trace1(x)                cout<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define loop for(int i=0;i<n;i++)
#define int long long int
#define rep(i,j,n) for(int i=(j);i<(n);i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define repd1(i,n) for(int i=n;i>=1;i--)
#define INF 0x3f3f3f3f
#define LLINF 1000111000111000111LL
const int MOD=1000000007;
using namespace std;
const int N=1000006;
int power(int x, int y, int p=MOD)
{
    int res = 1;  
    x = x % p;  
    while (y > 0)
    {
        if (y & 1LL)
            res = (res*x) % p;
        y = y>>1LL; 
        x = (x*x) % p;  
    }
    return res % p;
}
int n,m,k;
int calc(int a){
    int ans=0;
    for(int i=1;i<=min(a,n);i++)
        ans += min(m,(a-1)/i);
    return ans;
}
int32_t main(){
    cin>>n>>m>>k;
    int l =1;int r =n*m;
    int mid =(l+r)/2;
    while(l<r){
        mid = (l+r+1)/2;
        if(calc(mid)<k)l=mid;
        else r=mid-1;
        trace4(l,r,mid,calc(mid));
    }
    cout<<l<<endl;
}