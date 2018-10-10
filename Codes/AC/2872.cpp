#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,k,ans,t[1000006];
string s;
int main()
{
    std::cin.sync_with_stdio(false);
    cin >> s;
    n=s.length();
    for (int i=1; i<n; ++i) {
        int j = t[i-1];
        while (j > 0 && s[i] != s[j])
            j = t[j-1];
        if (s[i] == s[j])  ++j;
        t[i] = j;
    }
    if (t[s.length()-1]==0)
    {
        cout << "Just a legend";
    }
    else
    {
        i=0;
        ans=-1;
        while (i<n-1)
        {
            if (t[i]==t[n-1])
            {
                ans=t[i];
            }
            i++;
        }
        if (ans==-1)
        {
            if (t[t[n-1]-1]!=0)
            {
                ans=t[t[n-1]-1];
            }
        }
        if (ans==-1)
        {
            cout << "Just a legend";
        }
        else
        {
            i=0;
            while (i<ans)
            {
                cout << s[i];
                i++;
            }
        }
    }
    return 0;
}
