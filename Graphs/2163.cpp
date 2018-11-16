#include <bits/stdc++.h>
using namespace std ;
const int N = 5e4+18 ;
int n , m , a  , vis[N];
queue <int> q;

void BFS(){
    q.push(n);
    while(!q.empty()){
        a = q.front();
        q.pop();
        if(a>1 && !vis[a-1]) {
            q.push(a-1);
            vis[a-1] = vis[a]+1;
            if(a-1 == m)return ;
        }
        if(a<m && !vis[a*2]){
            q.push(a*2);
            vis[a*2] = vis[a]+1;
            if(a*2 == m)return ;
        }
    }
}


int main(){
    
    scanf("%d %d",&n ,&m);
    vis[n] = 1 ;
    BFS();
    printf("%d",vis[m]-1);
    return 0 ;
}