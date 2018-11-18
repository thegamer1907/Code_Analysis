#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    bool ok1=false,ok2=false;

    while(n--)
    {
        string s;
        cin>>s;
        if(s==pass){
            ok1=ok2=true;
        }
        if(s[1]==pass[0])
        {
            ok1=true;

        }
        if(s[0]==pass[1])
        {
            ok2=true;
        }
    }
    if(ok1&&ok2)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }
}
