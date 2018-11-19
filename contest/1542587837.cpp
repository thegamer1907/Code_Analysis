#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,f1,f2,i;
    string s,a;
    cin>>s;
    cin>>n;
    f1=0;f2=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(s==a)
            f1=1,f2=1;
        if(s[0]==a[1])
            f1=1;
        if(s[1]==a[0])
            f2=1;
    }
    if(f1==1 && f2==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}