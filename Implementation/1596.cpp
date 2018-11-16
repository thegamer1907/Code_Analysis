#include<bits/stdc++.h>
using namespace std;
int main()
{
    string team;
    cin>>team;
    int i,c=1;
    for(i=1;i<team.length();i++)
    {
        if((team.at(i-1)==team.at(i)))
        {
            ++c;
        }
        else if((team.at(i-1)!=team.at(i)))
        {
            c=1;
        }
        if(c==7)
        {
            cout<<"YES";
            break;
        }
    }
    if(c<7)
        cout<<"NO";
}
