//
//  main.cpp
//  B
//
//  Created by daniel zhdanovich on 13.09.18.
//  Copyright © 2018 daniel zhdanovich. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vll vector<ll>

#define faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector< vector<int> > g;
vector<bool> used;
void dfs(int v)
{
    used[v]= 1;
    for(int i = 0; i < g[v].size(); i++)
    {
        if(!used[g[v][i]])
            dfs(g[v][i]);
    }
}

int main() {
    faster
    int n;
    cin >> n;
    g.resize(n+3);
    used.assign(n+2,0);
    int k;
    cin >> k;
    int a;
    for(int i = 1; i <= n-1; i++)
    {
        cin >> a;
        g[i].pb(a+i);
    }
    dfs(1);
    if(used[k])
        cout << "YES";
    else cout << "NO";
    return 0;
}

