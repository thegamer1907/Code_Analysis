#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=100010;
const ll INF=1e18;
set<string> k1;
set<char> k2,k3;
int main()
{
    int n;
    string s;
    while(cin>>s)
    {
        k1.clear();
        k2.clear();
        k3.clear();
        int fg=0;
        cin>>n;
        string ss;
        for(int i=0;i<n;i++)
        {
            cin>>ss;
            k1.insert(ss);
            k2.insert(ss[0]);
            k3.insert(ss[1]);
        }
        if(k1.count(s))fg=1;
        else{
            if(k3.count(s[0])&&k2.count(s[1]))fg=1;
        }
        if(fg)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
