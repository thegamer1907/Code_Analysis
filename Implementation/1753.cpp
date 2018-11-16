#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    queue<char> q;
    int i=1;
    q.push(s[0]);
    while(q.size()<7 && i<l)
    {
        if(q.front()==s[i])
            q.push(s[i]);
        else
        {
            q = queue<char>();
            q.push(s[i]);
        }
        i++;
    }
    if(q.size()>=7)
        cout << "YES\n";
    else
        cout << "NO\n";
}
