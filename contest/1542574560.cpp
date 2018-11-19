#include<bits/stdc++.h>
using namespace std;
string s;
string ss[103];
int n;
int main()
{
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ss[i];
        if(s==ss[i])
        {
            cout<<"YES";
            return 0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if( s[0]==ss[i][1]&&s[1]==ss[j][0] )

            {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";
}
