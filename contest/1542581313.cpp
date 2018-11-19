#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int N,f=0,l=0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        string a;
        cin>>a;
        if(a[1]==s[0]) f++;
        if(a[0]==s[1]) l++;
        if(a==s) { l++; f++; }
    }
    if(f > 0 && l > 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
