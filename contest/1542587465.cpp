#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0, c1 = 0;
    string s, ss;
    cin>>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ss;
        if(ss[0]==s[0]&&s[1]==ss[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s[0]==ss[1])
            c1 = 1;
        if(s[1]==ss[0])
            c =1;
    }
    if(c&&c1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
