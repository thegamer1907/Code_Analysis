#include<bits/stdc++.h>
using namespace std;
int main()
{
    string team;
    cin>>team;


    int loc =team.length();
    int count=1;

    for(int i=0;i<loc;i++)
    {
        if(team[i] == team[i+1])
        {
            count++;
        }
        if(count<7 &&team[i] != team[i+1] )
        {
            count=1;
        }
    }
    count>=7 ? cout<<"YES\n":cout<<"NO\n";


    return 0;
}
