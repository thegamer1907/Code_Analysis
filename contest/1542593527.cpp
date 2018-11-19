/* ***************************************
Author        :Scau.ion
Created Time  :2017/10/05 15:02:00 UTC+8
File Name     :ion.cpp
*************************************** */

#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define ULL unsigned long long
#define PB push_back
#define MP make_pair
#define PII pair<int,int>
#define VI vector<int>
#define VPII vector<PII>
#define X first
#define Y second
#define IOS ios::sync_with_stdio(0);cin.tie(0);
#define IN freopen("in", "r", stdin);
#define OUT freopen("out", "w", stdout);

int main()
{
    IOS;
    string ss;
    cin>>ss;
    int n;
    cin>>n;
    bool f1 = 0, f2 = 0;
    for (int j = 1; j <= n; ++ j)
    {
        string s;
        cin>>s;
        if (s == ss)
        {
            f1 = 1;
            f2 = 1;
        }
        if (s[1] == ss[0])
        {
            f1 = 1;
        }
        if (s[0] == ss[1])
        {
            f2 = 1;
        }
    }
    if (f1 && f2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
