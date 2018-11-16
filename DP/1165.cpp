#include <bits/stdc++.h>
using namespace std;
int a[105];
int s[105];
int f (int sz) {
    int msf=s[0];
    int cm=s[0];
    for (int i=1;i<sz;i++){
        cm=max(s[i],cm+s[i]);
        msf=max(msf,cm);
    }
    return msf;
}
int main(){
    int n,ones=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]==1) {ones++; s[i]=-1;}else s[i]=1;
    }
    int ans=f(n);
    cout<<ans+ones<<endl;
    return 0;
}
