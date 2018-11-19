#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    long long n;
    cin >> n;
    long long a[26],b[26];
    for(long long i=0;i<26;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    bool flag = false;
    for(long long i=0;i<n;i++)
    {
        string c;
        cin >> c;
        a[c[0]-'a']++;
        b[c[1]-'a']++;
        if(c==s)
        {
            flag = true;
        }
    }
    if(flag || (a[s[1]-'a']!=0 && b[s[0]-'a']!=0))
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
    return 0;
}