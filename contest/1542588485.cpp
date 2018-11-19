#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    int n,c=0;
    cin >> s;
    cin >> n;
    string s1[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> s1[i];
    }
    for(int i=0;i<n;i++)
    {
        if((s1[i][0]==s[0] && s1[i][1]==s[1]) || (s1[i][1]==s[0] && s1[i][0]==s[1]))
        {
            c = 1;
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            if((s1[i][0]==s[1] && s1[j][1]==s[0]) || (s1[i][1]==s[0] && s1[j][0]==s[1]))
            {
                c = 1;
                break;
            }
        }
        if(c)
            break;
    }
    if(c)
        cout << "YES\n";
    else
        cout << "NO\n";
}
