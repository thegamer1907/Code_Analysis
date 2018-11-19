#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,i;string s,t,a;int aa=0,fir=0,sec=0;
    cin>>s>>n;a=s;a[0]=s[1];a[1]=s[0];
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t==s || t==a) {cout<<"YES"<<endl;return 0;}
        if(t[0]==a[0]) fir++;
        if(t[1]==a[1]) sec++;
    }
    if(fir>0 && sec>0){cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
    return 0;
}
