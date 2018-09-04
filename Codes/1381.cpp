//
//  main.cpp
//  tarea
//
//  Created by Adán López Alatorre on 3/31/17.
//  Copyright © 2017 Adán López Alatorre. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string.h>
#include <bitset>
#include <set>
#include <cstdio>
#include <cmath>
#include <vector>
#include <iomanip>
#include <stack>
#include <map>
#include <queue>
#include <climits>
#define se second
#define fi first

using namespace std;

typedef  long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const ll MOD = 1e9 + 7, maxN = 5e5 + 6, maxV = 6561 + 5;

ll n, arr[maxN], tot[maxN], lim, sm;

bool eval(int k){
    for(int i = 0; i < n; i++){
        tot[i] = arr[i] + (i + 1) * ll(k);
    }
    sort(tot, tot + n);
    sm = 0;
    for(int i = 0; i < k; i++)
        sm += tot[i];
    return sm <= lim;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    cin >> n >> lim;
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int l = 0, r = (int)n + 1, m;
    while(l + 1 < r){
        m = (l + r) >> 1;
        
        if(eval(m))
            l = m;
        else
            r = m;
    }
    
    eval(l);
    
    
    
    cout << l << ' ' << sm << '\n';
    
}
