#include<bits/stdc++.h>
using namespace std;
int main(){
bool visit[100001];
for(int i = 0; i < 100001; i++){
    visit[i] = false;
}
    int n, m;
    scanf("%d%d", &n, &m);
    int com[n];
    int num[n];
     for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int dist = 0;
    for(int i = n - 1; i >= 0; i--){
        if(visit[num[i]] == false){
            visit[num[i]] = true;
            dist++;
        }
         com[i] = dist;
    }

    for(int i = 0; i < m; i++){
        int idx;
        scanf("%d", &idx);
        cout <<com[idx - 1]<<endl;
    }
}
