#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+1;
string a[N];
bool aa, bb;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        if(a[i] == s)
        {
            aa = 1;
            bb = 1;
        }
        if(a[i][0] == s[1])
            bb = 1;
        if(a[i][1] == s[0])
            aa = 1;

    }
    if(aa && bb)
        cout << "YES";
    else cout << "NO";
}
