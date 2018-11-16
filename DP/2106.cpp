#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n], ans[n];
    for(int i=0;i<n;++i)cin>>a[i];
    set<int> s;
    for(int i=n-1;i>=0;--i){
        s.insert(a[i]);
        ans[i] = s.size();
    }
    while(m--){
        int l;
        cin>>l; l--;
        cout<<ans[l]<<endl;
    }
    return 0;
}
