#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string>mp;
    set<string>m;
    int a,b,c=0;
    string st;
    cin>>a>>b;
    while(a--)
    {
        cin>>st;
        mp.insert(st);
    }
    while(b--)
    {
        cin>>st;
       m.insert(st);
      if(mp.count(st)==1)c++;


    }
    int temp=mp.size();
    if(c%2==1)temp++;
    if(m.size()<temp)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
