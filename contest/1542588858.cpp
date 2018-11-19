#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    for(int i=1; i<=n; i++)
    {
        if(a[i] == s)
        {
            cout<<"YES";
            return 0;
        }
    }

//    bool a = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) {
            if( s[0] == a[i][1] && s[1] == a[j][0] && i!=j  || s[0]==a[i][1] && s[1] == a[i][0] )
            {
                cout<<"YES";
                return 0;
            }
//       else a =0;
        }
    }
    cout<<"NO";




    return 0;
}
