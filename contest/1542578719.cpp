#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<=k;i++)
#define per(i,j,k) for(int i=j;i>=k;i--)
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
typedef long long ll;
const int maxn=1e6+10;
int n,m,k,t;

int main(){
    double a[10],d,e;
    cin>>a[0]>>a[1]>>a[2]>>d>>e;
    if(a[0]==12.0) a[0]=0;
    a[0]*=5.0;d*=5.0;e*=5.0;
    a[0]+=a[1]/60.0;
    a[0]+=a[2]/60.0/60.0;
    a[1]+=a[2]/60.0;
    sort(a,a+3);
   // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    if(a[0]<=d&&d<=a[1]&&a[0]<=e&&e<=a[1]) cout<<"YES"<<endl;
    else if(a[1]<=d&&d<=a[2]&&a[1]<=e&&e<=a[2]) cout<<"YES"<<endl;
    else{
        if((d>=a[2]||d<=a[0])&&(e>=a[2]||e<=a[0])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
