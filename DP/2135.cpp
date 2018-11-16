#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast
    #define int long long
    int n,m; cin>>n>>m;
    int arr[n+10]={0};
    set<int>st;
    int ans[n+10]={0};
    for(int i=1; i<=n; i++) cin>>arr[i];
    for(int i=n; i>0; i--){
        st.insert(arr[i]);
        ans[i]=st.size();
    }
    for(int i=0; i<m; i++){
        int l; cin>>l;
        cout<< ans[l] <<endl;
    }
    return 0;
}
