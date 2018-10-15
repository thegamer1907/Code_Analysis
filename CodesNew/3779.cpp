#include<bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 100000+10;

int arr[maxn];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>arr[i];
    sort(arr+1,arr+n+1);
    int sum=0;
    for(int i=1;i<=n;i++) sum+=arr[i];
    sum+=m;
    cout<<max((sum-1)/n+1,arr[n])<<" "<<m+arr[n]<<endl;
    return 0;
}
