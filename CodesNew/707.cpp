#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, similar=0;
    cin>>n>>m;
    string s;
    set<string> st;
    for(int i=0; i<n; i++){
        cin>>s;
        st.insert(s);
    }
    for(int i=0; i<m; i++){
        cin>>s;
        if(st.count(s)==1) similar++;
        st.insert(s);
    }
    if(similar%2==1) n++;
    if(n>m) cout<<"YES";
    else cout<<"NO";
}
