#include <bits/stdc++.h>
using namespace std;


int main() {
    string a,b;
    vector<string>c;
    int n,first=0,ans=0,second=0;
    cin>>a>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(b==a)ans=1;
        if(a[1]==b[0])second=1;
        if(a[0]==b[1])first=1;
    }
    if(ans==1 || (first==1&&second==1))
        cout<<"YES";
    else cout<<"NO";
}

