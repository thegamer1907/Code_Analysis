//https://codeforces.com/contest/266/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    while(t--)
    {

        for(int i=0; i<n; i++)
        {
            if(s[i+1]>s[i])
            {
                swap(s[i],s[i+1]);
                i++;

            }
        }
    }
    cout<<s<<endl;
    return 0;
}
