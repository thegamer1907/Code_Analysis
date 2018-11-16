#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main()
{
    ll n,m,counter=0;
    int skill;
    vi b;
    vi g;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>skill;
        b.push_back(skill);
    }
    sort(b.begin(),b.end());

          cin>>m;
    for(ll i=0;i<m;i++){
        cin>>skill;
        g.push_back(skill);
    }
    sort(g.begin(),g.end());
   for(int i=0;i<b.size();i++){
    for(int j=0;j<g.size();j++){
        if(abs(b[i]-g[j])<=1){
            counter++;
            b.erase(b.begin()+i);
            g.erase(g.begin()+j);
            i--;
        }
    }
   }
   cout<<counter;
    return 0;
}
