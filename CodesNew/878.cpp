#include <iostream>
#include <cstdio>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n,m,to = 0,pol = 0,vra = 0;
    cin>>n>>m;
    string POLSHAR[n],VRAGOV[m];
    for(int i=0;i<n;i++)cin>>POLSHAR[i];

    for(int i=0;i<m;i++)cin>>VRAGOV[i];

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            if (POLSHAR[i]==VRAGOV[j])to++;
    pol = to/2+to%2 + n - to;
    vra = to/2+ m - to;
    cout<<(pol>vra?"YES":"NO");






}
