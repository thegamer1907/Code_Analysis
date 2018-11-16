#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin>>s;
    int n=s.size();
    int a[n],c=0;
    a[0]=0;
    for(int i=1;i<n;i++){
       if(s[i]==s[i-1])
       c++; 
     a[i]=c;
    }
    int m;cin>>m;
for(int i=0;i<m;i++){
    int l,r;cin>>l>>r;
    cout<<a[r-1]-a[l-1]<<"\n";
}
    return 0;
}
