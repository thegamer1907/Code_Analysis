#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define mod %MOD
const int MOD = 1e9 + 7;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int h[n+1]={0};
    for(int i=1;i<=n;i++)
        h[i]=h[i-1]+a[i];

    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            ans=max(ans, h[n]-2*(h[j]-h[i-1])+(j-i+1));
        }
    }
    cout<<ans<<"\n";
}