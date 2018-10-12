#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<string> v(n+m);
    for(int i=0;i<n+m;i++) cin>>v[i];
    set <string> ms(v.begin(),v.end());
    int p=ms.size();
    p=m+n-p;
    if(n>m) cout<<"YES";
    else if(m>n) cout<<"NO";
    else{
        if(p%2==0) cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}