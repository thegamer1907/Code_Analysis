#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

void compute(){
    int n;
    cin>>n;
    vector <pair<int, bool> > b(n);
    for(int i=0; i<n; i++){
        cin>>b[i].first;
        b[i].second = false;
    }
    sort(b.begin(), b.end());
    int m;
    cin>>m;
    vector <pair<int, bool> > g(m);
    for(int i=0; i<m; i++){
        cin>>g[i].first;
        g[i].second = false;
    }
    sort(g.begin(), g.end());
    int co_pairs = 0;
    if(n>m){
        for(int i=0; i<m; i++){
            if(g[i].second)
                continue;
            for(int j=0; j<n; j++){
                if(b[j].second)
                    continue;
                if((b[j].first-1 == g[i].first) || (g[i].first-1 == b[j].first) || g[i].first == b[j].first){
                    ++co_pairs;
                    b[j].second = true;
                    g[i].second = true;
                    break;
                }
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(b[i].second)
                continue;
            for(int j=0; j<m; j++){
                if(g[j].second)
                    continue;
                if((b[i].first-1 == g[j].first) || (g[j].first-1 == b[i].first) || g[j].first == b[i].first){
                    ++co_pairs;
                    g[j].second = true;
                    b[i].second = true;
                    break;
                }
            }
        }
        
    }
    
    cout<<co_pairs<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    compute();
    return 0;
}
