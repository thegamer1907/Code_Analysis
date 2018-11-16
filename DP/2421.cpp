#include<bits/stdc++.h>


using namespace std;
const int N=2e5+5;
int a[N];
typedef long long ll;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    int p=1;
    int sum=0;
    for(int i=1;i<=k;i++) sum+=a[i];
    ll minn=sum;
    for(int i=2;i+k-1<=n;i++){
        //cout<<i+k-1<<endl;
        sum-=a[i-1];
        sum+=a[i+k-1];
        if(sum<minn){
            minn=sum;
            p=i;
        }
    }
    cout<<p<<endl;
    return 0;
}
