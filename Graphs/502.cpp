#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n;
    cin >> t;
    string s;
    int i,j;
    cin >> s;
    if(s.size()==1)
    {
        cout << s << "\n";
    }
    else
    {
    for(j=0;j<t;j++)
    {
    for(i=1;i<n;i++)
    {
       if(s[i-1]=='B'&&s[i]=='G')
       {
           swap(s[i],s[i-1]);
           i++;
       }
    }
    }
    cout << s << "\n";
    }
}