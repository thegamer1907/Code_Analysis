#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string x;
    int f=0,f0=0,f1=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x == s)
            f=1;
        if(x[1] == s[0])
            f0=1;
        if(x[0] == s[1])
            f1=1;
    }
    if(f == 1 || (f0==1 && f1==1))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
