#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int team_0=0,team_1=0;
        for(int i=0;i<str.length();i++)
        {
            if(team_0>=7 || team_1>=7)
                break;
            else if(str[i]=='0' && team_1==0)
                team_0++;

            else if(str[i]=='1' && team_0==0)
                team_1++;

            else if(str[i]=='0' && team_1!=0)
            {
                team_0++;
                team_1=0;
            }
            else if(str[i]=='1' && team_0!=0)
            {
                team_1++;
                team_0=0;
            }
        }
        if(team_0>=7 || team_1>=7)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
