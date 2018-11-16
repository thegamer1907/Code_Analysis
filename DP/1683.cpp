#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<int> v1,v2;
    cin>>s;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s.substr(i,2).compare("BA")==0)
        { v1.push_back(i);
        }
    }
    for(int i=s.length()-2;i>=0;i--)
    {
        if(s.substr(i,2).compare("AB")==0)
        {
        v2.push_back(i);
        }
    }
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(abs(v1[i]-v2[j]) >=2)
            {cout<<"YES";return 0;}
        }
    }cout<<"NO";
}