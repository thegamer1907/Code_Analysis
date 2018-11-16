#include <bits/stdc++.h>
using namespace std;

#define OnlineJudge1

typedef long long ll;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifdef OnlineJudge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

int n,m;

int path_visited[(int)2e4+1];

getit(int s){
    queue<int> q;
    q.push(s);
    int dep = 0;
    while(true){
        for(int sz = q.size();sz--;){
            int t = q.front();
            path_visited[t] = 1;
            q.pop();
            if(t == m)return dep;
            if(t < m && !path_visited[t*2])q.push(t * 2);
            if(t > 1 && !path_visited[t-1])q.push(t-1);
        }
        dep++;
    }
}

int main(){
    init();
    cin >> n >> m;
    cout << getit(n);
}