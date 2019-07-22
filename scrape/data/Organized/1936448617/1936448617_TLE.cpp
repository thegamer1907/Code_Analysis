#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N=1e5+9;
ll n,m,k,a[N];
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)cin>>a[i];
    ll ans=0;
    for(int i=0;i<m;){
        int t=i;
        ans++;
        int x=a[i]-t;
        int y=x%k;
        x=x+(k-y)%k;
        while(a[i]-t<=x)i++;
    }
    cout<<ans<<endl;
    return 0;
}