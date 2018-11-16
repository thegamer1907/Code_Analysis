#include <bits/stdc++.h>
using namespace std;
int main()
{
    string team;
    cin>>team;
    int i=0;
    int n=team.length();
    int cpt;
    while(i<n)
    {
        char c=team[i];
        cpt=0;
        while(i<n)
        {
            if(team[i]==c)
                cpt++;
            else break;
            if(cpt==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            i++;
        }
    }
    cout<<"NO"<<endl;
}
