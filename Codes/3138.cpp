#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 101010;
int a[N];
int n,mx;

int main(){
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    int ans=-1,mx=INF;
    for (int i=0;i<n;i++){
        int tmp = a[i]-i;
        if (tmp<=0) tmp =0;
        else tmp = (tmp-1)/n+1;
        if (tmp<mx){
            mx = tmp;
            ans = i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
