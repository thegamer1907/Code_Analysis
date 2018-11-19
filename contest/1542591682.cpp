#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a[1000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>s;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    bool b1=false;
    bool b2=false;
    for(int i=0;i<n;i++)
    {
        if(s[0]==a[i][1])
            b2=true;
    }
    bool b3=false;
    bool b4=false;
    for(int i=0;i<n;i++)
    {
        if(s[1]==a[i][0])
            b3=true;
    }
    if(b2&&b3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}