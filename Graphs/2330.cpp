//HASHEMESHOON hastam ;)
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <ctime>
#define ll long long
#define ss second
#define ff first
using namespace std;
ll n,m,x,y;
set <ll> s;
vector <ll> v[100000];
void dfs(ll xx,ll k){
    x=max(x,k);
    for(int i=0;i<v[xx].size();i++){
        dfs(v[xx][i],k+1);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        if(y==-1)s.insert(i+1);
        else v[y].push_back(i+1);
    }
    while(!s.empty()){
        y=*s.begin();s.erase(y);
        dfs(y,0);
    }
    cout<<x+1;
    return 0;
}
