#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <set>
#include <queue>

using namespace std;

#define all(v)   v.begin(),v.end()
#define rall(v)  v.rbegin(),v.rend()
#define sz(v)    (int)v.size()

int main()
{
    bool ok=false;
    string pass;
    cin>>pass;

    int n;
    cin>>n;

    vector<string>v(n);

    for(int i=0 ; i<n ; i++)
    {
        cin>>v[i];
        if(v[i]==pass)  ok=true;
    }

    if(ok)
    {
        cout<<"YES\n";
        return 0;
    }

    bool ok1=false, ok2=false;

    for(int i=0 ; i<n ; i++)
    {
        if(v[i][0]==pass[1])  ok1=true;
        if(v[i][1]==pass[0])  ok2=true;
    }

    if(ok1 && ok2)
        cout<<"YES\n";
    else
        cout<<"NO\n";


    return 0;
}
