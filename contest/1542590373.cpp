#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool x=0,y=0;
    string s;
    string tmp;

    cin>>s>>n;

    for(int i=0;i<n;i++)
    {
        cin>>tmp;

        if(s==tmp)
        {
            cout<<"YES";
            return 0;
        }

        if(tmp[0]==s[1]) x=1;

        if(tmp[1]==s[0]) y=1;

        if(x&&y)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
}
