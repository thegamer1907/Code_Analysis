#include <bits/stdc++.h>

#define fastInOut ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

map<short,short>team;
int b,g[101],numteams;

int main()
{fastInOut;

    short n,m;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>b;
        team[b]++;
    }
    cin>>m;
    for(int i =0;i<m;i++){
        cin>>g[i];
    }
    sort(g,g+m);
    for(int i =0;i<m;i++){
        if(team[g[i]-1]>=1){
            numteams++;
            team[g[i]-1]--;
        }
        else if(team[g[i]]>=1){
            numteams++;
            team[g[i]]--;
        }
        else if(team[g[i]+1]>=1){
            numteams++;
            team[g[i]+1]--;
        }
    }
    cout<<numteams<<"\n";
    return 0;
}
