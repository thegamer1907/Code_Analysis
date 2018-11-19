#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector <string> v;
    char s[10],in[10];
    cin>>s;
    cin>>n;
    int t=n;
    bool f=false,f1=false,f2=false;
    while(n--)
    {
        cin>>in;
        if(strcmp(in,s)==0)
            f=true;
        v.push_back(in);
    }
    if(f)
        cout<<"YES";
    else
    {
        for(int i=0;i<t;i++)
        {
            if(v[i][1]==s[0])
                f1=true;
            if(v[i][0]==s[1])
                f2=true;
        }
        if(f1&&f2)
           cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
