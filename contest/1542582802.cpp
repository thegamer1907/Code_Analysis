#include <bits/stdc++.h>

using namespace std;
int n;
string h,s[105];
int main()
{
    cin>>h;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            string tmp=s[i]+s[j];
            if(tmp.find(h)!=string::npos)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;

}