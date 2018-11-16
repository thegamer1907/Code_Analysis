#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
#define debug puts
#define setp cout << fixed << setprecision(3)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1e6+6;
const int MOD=1e9+7;
const ll INF=1e18+8;
int a[N];
int main(void){
    FAST_IO;
    int n;
    cin >> n;
    int mx=1;
    int ans=1;
    for(int i=1;i<=n;i++)   cin >> a[i];
    for(int i=2;i<=n;i++){
        if(a[i]>a[i-1]) ans++,mx=max(mx,ans);
        else{
            mx=max(mx,ans);
            ans=1;
        }
    }
    cout << mx << endl;
    return 0;
}
/********

*********/
