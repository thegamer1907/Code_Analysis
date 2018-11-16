#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1="0000000";
    string s2="1111111";
    int flag=0,count=0;
    getline(cin,s);
    if(s.find(s1)<s.size())
        flag=1;
    else if(s.find(s2)<s.size())
        count=1;
    if(flag==1 || count==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
    
}