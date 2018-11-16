#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ones=0,zeros=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0')
            zeros++;
        if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1')
            ones++;
    }
    if(zeros>0||ones>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
