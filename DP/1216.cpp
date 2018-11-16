#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=2e5+8;
int a[N],n,su[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];su[i]+=su[i-1]+a[i];}
    int tot=su[n],ans=INT32_MIN;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            ans=max(ans,tot-2*(su[j]-su[i-1])+j-i+1);
        }
    }
    cout<<ans<<endl;

    return 0;
}