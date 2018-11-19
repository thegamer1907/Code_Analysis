#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<iterator>
#include<unordered_map>
#include<unordered_set>
#include<assert.h>
using namespace std;


int cnts[16]={0};

const int bnd = 4;

int dp[16*bnd*bnd*bnd*bnd*64*2];

int tle = 0;

int gethash(int i, int curs[4],int n){

    int ans = i;
    ans = (ans<<2) + curs[0];
    ans = (ans<<2) + curs[1];
    ans = (ans<<2) + curs[2];
    ans = (ans<<2) + curs[3];
    ans = (ans<<6) + n;
    return ans;
}

int f(int i, int curs[4],int k,int n){
    if(i==(1<<k)){
        //check more than half;
        bool ok = true;
        
        for(int j=0;j<k;j++){
            if(2 * curs[j] > n )ok =false;
        }
        if(ok && n!=0) return 1;
        else return 0;
    }
    int z =dp[gethash(i,curs,n)];
    if(z!=-1) return z;
    
    int inc[4] = {0};
    
    if( (i & (1<<0)) !=0){
        inc[0]++;
    }
    if( (i & (1<<1)) !=0){
        inc[1]++;
    }
    if( (i & (1<<2)) !=0){
        inc[2]++;
    }
    if( (i & (1<<3)) !=0){
        inc[3]++;
    }
    int bst =0;
    int curs2[4]={0};
    for(int j=0;j<=min(bnd-1,cnts[i]);j++){
        
        
        for(int u=0;u<k;u++){
            curs2[u] = curs[u]+j*inc[u];
        }
        int cand = f(i+1,curs2,k,n+j);
        bst = cand|bst;
        if(cand==1) break;
        
    }
    dp[z] = bst;
    return bst;
    
    
}


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n,k;
    cin >> n;
    cin >> k;
    //vector <int> cnts ((1<<k),0);
    for(int i=0;i<n;i++){
        int pt = 0;
        for(int j=0;j<k;j++){
            int x;
            cin >> x;
            pt = (pt<<1) + x;
            
        }
        cnts[pt]++;
        
        
    }
    for(int i=0;i<16*bnd*bnd*bnd*bnd*64*2;i++)
        dp[i] = -1;
    int curs[4] = {0};
    int v = f(0,curs,k,0);
    if(v==1) cout << "YES" << endl;
    else cout << "NO" << endl;

    
    return 0;
}
