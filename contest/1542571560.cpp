#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define X first
#define Y second
using namespace std;
string s[105];
int main()
{
    string a;cin>>a;
    int i,j,k=0,N;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>s[i];
        if(s[i]==a) k=1;
    }

    if(k)
    {
        cout<<"YES";return 0;
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            if(s[i][1]==a[0]&&s[j][0]==a[1])
            {
                cout<<"YES";return 0;
            }
        }
        cout<<"NO";
    return 0;
}