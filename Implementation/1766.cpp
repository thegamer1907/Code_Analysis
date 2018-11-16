#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string comp1="1111111",comp0="0000000";
    if (s.find(comp1) != std::string::npos || s.find(comp0) != std::string::npos) 
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    return 0;
}