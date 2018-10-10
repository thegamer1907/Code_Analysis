#include <bits/stdc++.h>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

typedef long long ll;
int a[101010];
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a[i];
            if(i!=0)a[i]+=a[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int k;
        cin>>k;
        cout<<lower_bound(a,a+n,k)-a+1<<endl;
    }
}
