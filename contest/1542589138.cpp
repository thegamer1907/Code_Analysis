//Bismillah hirrahmanir rahim.//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string start,p,alamin[1111];
    
    cin >> start;
    int m;
    
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> alamin[i];
    }
    for(int i=0; i<m; i++){
        string meed = alamin[i];
        for(int j=0; j<m; j++){
            meed += alamin[j];
            if(meed.find(start)!=-1){
                cout << "YES\n";
                return 0;
            }
            meed = alamin[i];
        }
    }
    cout << "NO\n";
    return 0;
}