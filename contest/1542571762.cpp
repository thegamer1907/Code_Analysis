#include <bits/stdc++.h>


using namespace std;
map <char,int> m,m2;
string a,s1;
long long int n;
int main()
{
    cin >> s1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a;
        if(a==s1)
        {
            cout << "YES" << endl;
            return 0;
        }
        if(a[0]==s1[1] && a[1]==s1[0])
        {
            cout << "YES" << endl;
            return 0;
        }
        m[a[0]]=1;
        m2[a[1]]=1;
    }
    if(m2[s1[0]]==1 && m[s1[1]]==1)
    {
            cout << "YES" << endl;
            return 0;
    }
    cout << "NO";
    return 0;
}