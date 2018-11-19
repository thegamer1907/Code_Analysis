#include <bits/stdc++.h>
using namespace std;
int main()
{
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    string s[n];
    bool f=false;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        string t=s[i];
        if((t[0]==pass[0]&&t[1]==pass[1])||(t[1]==pass[0]&&t[0]==pass[1]))
        {
            f=true;
        }
    }

    for(int i=0; i<n; i++)
    {
        string x=s[i];
        for(int j=0; j<n; j++)
        {
            string y=s[j];
            if((x[1]==pass[0]&&y[0]==pass[1]))f=true;
        }

    }
    if(f==true)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
