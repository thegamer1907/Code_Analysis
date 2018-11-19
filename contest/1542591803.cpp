#include <bits/stdc++.h>
using namespace std;
#define ll long long
void HoH()
{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}
int main()
{
    HoH();
    string s;
    int n;
    cin>>s>>n;
    string arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
    if (arr[i][0]==s[1]&&arr[i][1]==s[0])return cout<<"YES",0;
    if (arr[i][0]==s[0]&&arr[i][1]==s[1])return cout<<"YES",0;
        for (int j=0;j<n;j++)
        {
            if (j!=i&&arr[i][1]==s[0]&&arr[j][0]==s[1])return cout<<"YES",0;
        }
    }
    cout<<"NO";
    return 0;
}
