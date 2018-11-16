#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    string s2 = "0000000";
    string s1 = "1111111";
    if(strstr(x.c_str(),s2.c_str()) || strstr(x.c_str(),s1.c_str())) cout<<"YES";
    else cout<<"NO";
}