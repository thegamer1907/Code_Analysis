#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<vector<int> > graph;
#define put(a) cout<<a
#define putln(a) cout<<a<<endl;
#define forn(i,a,b) for(int i=a;i<=b;++i)
#define lforn(i,a,b) for(ll i=a;i<=b;++i)
#define pb(b) push_back(b)

struct Point{
    ld x,y;
    Point(){};
    Point(ld x,ld y):x(x),y(y){};
};

template<typename S,typename T>
void dbg(S s, T t){
    cout<<s<<' '<<t<<endl;
}

template<typename T>
void print_vector(vector<T>&a){
    for(T el:a)cout<<el<<' ';
    cout<<endl;
}

void dfs(int u,graph& g,vector<bool>&used){
    used[u]=true;
    for(int v:g[u]){
        if(!used[v]){
            dfs(v,g,used);
        }
    }
}

int main(){
    int n,a,b;cin>>n>>a>>b;
    if(b<a)swap(a,b);
    vector<int>cmd(n);
    for(int i=0;i<n;++i)cmd[i]=i+1;
    int round=1;
    while(cmd.size()>1){
        vector<int>newcmd;
        for(int i=0;i<cmd.size()-1;i+=2){
            if(cmd[i]==a&&cmd[i+1]==b){
                if(cmd.size()==2){
                    putln("Final!");
                    break;
                }
                putln(round);
                break;
            }else if(cmd[i]==a||cmd[i]==b){
                newcmd.push_back(cmd[i]);
            }else if(cmd[i+1]==a||cmd[i+1]==b){
                newcmd.push_back(cmd[i+1]);
            }else{
                newcmd.push_back(cmd[i]);
            }
        }
        cmd=newcmd;
        round++;
    }
}
