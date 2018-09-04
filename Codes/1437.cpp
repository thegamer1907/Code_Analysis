#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define inf 0x3f3f3f3f
#define LL long long
LL a[N];
LL b[N];
int main()
{
    LL n,S;
    cin>>n>>S;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l = 0,r = n,ans=0,c=0;
    for(int i=0;i<=100;i++){
        int mid = (r+l)/2;
        for(int i=1;i<=n;i++){
            b[i]=a[i]+1ll*i*mid;
        }
        sort(b+1,b+1+n);
        LL res = 0;
        for(int i=1;i<=mid;i++){
            res+=b[i];
        }
        if(res>S){
            r=mid-1;
        }
        else {
            l=mid+1;
            ans=res;
            c=mid;
        }
    }
    cout<<c<<" "<<ans<<endl;
}