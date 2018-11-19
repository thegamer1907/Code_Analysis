#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,beg[10005]={0},end[10005]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        if(s1==s)
        {
            cout<<"YES";
            return 0;
        }
        beg[s1[0]]++;
        end[s1[1]]++;
    }
    if(beg[s[1]]>0&&end[s[0]]>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
