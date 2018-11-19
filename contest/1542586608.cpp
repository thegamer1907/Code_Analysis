#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

string s;

int main()
{
    while(cin>>s)
    {
        int n;
        cin>>n;
        bool w=false,t=false;
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            if(a[0]==s[1]) w=true;
            if(a[1]==s[0]) t=true;
            if(s==a) w=t=true;
        }
        if(w&&t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
