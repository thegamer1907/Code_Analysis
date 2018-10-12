#include <bits/stdc++.h>
using namespace std;
const int maxn=110;
int n,m,mx=-1,a[maxn];
typedef long long ll;
int ans1=0,ans2=0;
int main(){
    scanf("%d%d",&n,&m);
    for (int i=1; i<=n; i++){
        scanf("%d",&a[i]);
        mx=max(mx,a[i]);
    }
    ans1=mx+m;
    ans2=mx;
    for (int i=1; i<=n; i++)
        m-=mx-a[i];
    if(m>0) {
        ans2+=m/n;
        if(m%n) ans2++;
    }
    cout<<ans2<<" "<<ans1<<endl;
    return 0;
}
