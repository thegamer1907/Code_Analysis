#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1),v2(m);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    set<int>st;
    vector<int>ans(n+1);
    for(int i=n;i>=1;i--){
        st.insert(v[i]);
        ans[i]=st.size();
    }
    for(int i=0;i<m;i++){
        cout<<ans[v2[i]]<<endl;

    }
}
