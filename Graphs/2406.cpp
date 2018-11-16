#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <climits>
#include <queue>
using namespace std;

typedef long long ll;

bool *visited;

list <ll> *lst;

ll dfs(ll start)
{
    queue <ll> q;
    queue <ll> d;
    
    d.push(1);
    q.push(start);
    
    visited[start]=true;
    
    ll f,depth=1,mx=0;
    
    while (!q.empty())
    {
        f=q.front();
        depth=d.front();
        
        mx=mx<depth?depth:mx;
        
       // cout<<f<<" "<<depth<<endl;
        q.pop();
        d.pop();
        
        for (list <ll>::iterator i=lst[f].begin();i!=lst[f].end();i++)
        {
           // cout<<*i<<" "<<visited[*i]<<endl;
            if (!visited[*i])
            {
                visited[*i]=true;
                d.push(depth+1);
                q.push(*i);
            }
        }
    }
    
    return mx;
}

int main() 
{
    ll n;
    cin>>n;
    
    lst=new list <ll> [n+1];
    visited=new bool [n+1];
    
    vector <ll> tp;
    
    for (ll i=1;i<=n;i++)
    {
        visited[i]=false;
        ll tmp;
        cin>>tmp;
        
        if (tmp==-1)   tp.push_back(i);
        else    lst[tmp].push_back(i);
    }
    
    ll mx=0;
    
    for (ll i=0;i<tp.size();i++)
    {
        ll tmp=dfs(tp[i]);
        
        mx=mx<tmp?tmp:mx;
    }
    
    cout<<mx<<endl;
}