#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int flag1=0,flag2=0,flag=0;
    for (int i = 0 ; i < n ; i++)
    {
        string temp;
        cin >> temp;
        if (temp[0] == s[0] && temp[1] == s[1] || (temp[1] == s[0] && temp[0] == s[1]))
            flag = 1;
        else if (temp[1] == s[0])
            flag1 = 1;
        else if (temp[0] == s[1])
            flag2 = 1;
    }
    //cout << flag << endl;
    if((flag1 && flag2) || flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}