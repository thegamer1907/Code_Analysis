#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    int f=0,g=0;
    for(int i=1;i<str.size();i++)
    {
        if(str[i-1]=='A' and str[i]=='B' and f==0)
        {
            for(int j=i+2;j<str.size();j++)
            {
                if(str[j-1]=='B' and str[j]=='A')
                {
                    cout << "YES\n";
                    return 0;
                }
            }
            f=1;
        }
        if(str[i-1]=='B' and str[i]=='A' and g==0)
        {
            for(int j=i+2;j<str.size();j++)
            {
                if(str[j-1]=='A' and str[j]=='B')
                {
                    cout << "YES\n";
                    return 0;
                }
            }
            g=1;
        }
        if(f and g) break;
    }
    cout << "NO\n";
    return 0;
}
