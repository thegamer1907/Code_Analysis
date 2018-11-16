#include <bits/stdc++.h>
using namespace std;
int main ( )
{
    int c=1;
    string s;
    cin>>s;
    for (int i=0;i<s.size()-1;i++)
    {
        if (s[i]==s[i+1])
            c++;
        else
            c=1;
            if (c>=7)
            {
                cout<<"YES";
                return 0;
            }
    }
    cout <<"NO";
    return 0;
}
