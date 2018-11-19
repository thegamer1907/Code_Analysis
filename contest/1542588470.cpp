#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=0;
    string s,x="",y,a="",b="";
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        if(y==s) f=1;
        if(y[0]==s[1] && y[1]==s[0]) f=1;
        a+=y[0];
        b+=y[1];
    }
    if(f==1) {cout<<"YES";return 0;}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && a[i]==s[1] && b[j]==s[0]) {f=1;break;}
        }
    }
    if(f==1) cout<< "YES";
    else cout<< "NO";
}
