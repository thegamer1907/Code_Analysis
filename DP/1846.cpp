#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    string s; vector<int> a,b;
    cin >> s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]=='B' && s[i-1]=='A')
        a.push_back(i-1);
        else if(s[i]=='A' && s[i-1]=='B')
        b.push_back(i-1);
    }
    if(a.size() == 0 || b.size()==0)
    {
        cout << "NO";
        return 0;
    }
    if(abs(a[0]-b[b.size()-1]) <=1 && abs(a[a.size()-1]-b[0]) <= 1)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}
   
