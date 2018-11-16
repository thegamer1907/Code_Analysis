#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector <int> b(n);
    for(int i=0;i<n;i++)
        cin>>b[i];
    int m; cin>>m;
    vector <int> g(m);
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    int i=0,j=0,ans=0;
    for(;i<n&&j<m;){
        if(abs(b[i]-g[j])<2){
            ans++;
            i++; j++;
        }else if(b[i]>g[j]){
            j++;
        }else{
            i++;
        }
    }
    cout<<ans;
}
