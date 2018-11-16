#include<bits/stdc++.h>



using namespace std;
const int N=1e5+5;
int a[N];
int vis[N];
int q[N];

int main()
{
    set<int> st;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>=1;i--){
        st.insert(a[i]);
        vis[i]=st.size();
    }
    for(int i=1;i<=m;i++) cin>>q[i];
    for(int i=1;i<=m;i++) cout<<vis[q[i]]<<endl;
    return 0;
}
