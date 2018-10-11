#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin>>n>>m;
    set <string> a;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        a.insert(s);
    }

    int advA=0, advB=0, c=0;
    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        if(a.find(s)!=a.end())
        {
            c++;
        }
        else
        {
            advB++;
        }
    }
    advA = n-c;
    if(c%2 == 0){
    if(advA > advB)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    else{
        if(advA<advB)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
