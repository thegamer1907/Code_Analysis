#include<bits/stdc++.h>   
#define ll long long
#define sz size
#define pb push_back
#define er erase
#define in insert
#define mp make_pair
#define pi pair
#define int long long
#define rc(s) return cout<<s,0
using namespace std;
const int N=300005;

int n,m,a[105];

signed main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    int ans2=a[n]+m;

    while(m>=1){
        sort(a+1,a+n+1);
        a[1]++;
        m--;
    }
    sort(a+1,a+n+1);
    cout<<a[n]<<' '<<ans2;
    
}