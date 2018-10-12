#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    set<string>st;
    string s;
    for(int i=0;i<n+m;i++)
    {
        cin>>s;
        st.insert(s);
    }
    if(((m+n-st.size())%2 && n==m) || n>m) cout<<"YES\n";
    else cout<<"NO\n";
}
