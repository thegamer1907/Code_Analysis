//
//  main.cpp
//  A
//
//  Created by Sultan.
//  Copyright © 2017 Sultan. All rights reserved.
//
//  CF Handle : 2017_Scayre_TBIL_777
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

#define ll long long
#define ull unsigned ll
#define ioi exit(0);

#define f first
#define s second

#define inf 1e9 + 7;

#define NFS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)

#define endl "\n"

#define in(x) insert(x)

#define rep(x,y,z) for(int x=y;x<=z;x++)
#define per(x,y,z) for(int x=y;x>=z;x--)

using namespace std;

ll n,cnt,t,flag,flaglast,flagfirst;

string s,ch;

string a[200];

char ans[2];

int main() {
    
    NFS
    
    cin>>ans;
    
    cin>>t;
    
    while(t--){
        char sp[2];
        cin>>sp;
        if(strcmp(ans,sp)==0){
            flag = 10;
        }
        else{
            if(ans[0] == sp[1]){
                flaglast=1;
            }
            if(ans[1]==sp[0]){
                flagfirst=1;
            }
        }
    }
    if(flag!=0){
        cout<<"YES" << endl;
    }
    else if(flagfirst==1 && flaglast ==1){
        cout<<"YES" << endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    ioi
}

