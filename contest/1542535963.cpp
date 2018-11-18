#include <bits/stdc++.h>
using namespace std;
int v[20];

bool ac(int b){
    if(v[0]>0)return true;
    for(int i=1, k=(1<<b)-2; i<k; i++,k--){
        if(v[i]>0 && v[k]>0)return true;
    }
    return false;
}
bool rant(int b, int val, const unordered_set<int> &ant){


    for(auto i : ant){
        bool col = false;
        int temp  = val;
        for(int k=0; k<=b; k++){
            if((temp>>k)&1 && (i>>k)&1){
                col = true;
                break;
            }
        }
        if(!col)return true;
    }
    return false;
}

int main(){

    int a,b;cin>>a>>b;
    unordered_set<int> ant;bool sol = false;
    memset(v, 0, sizeof v);
    for(int i=0; i<a; i++){
        int p = 0, val = 0;
        for(int k=0; k<b; k++){
            int bit;cin>>bit;
            if(bit){
                val+=(1<<p);
            }
            p++;
        }
        sol = rant(b, val, ant);
        v[val]++;
        ant.insert(val);
    }
    
    if(sol || ac(b))cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}