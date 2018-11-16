#include<bits/stdc++.h>

using namespace std;

int visited[2001];

int main()
{
    memset(visited,0,sizeof(visited));
    int n,i;
    cin >> n;
    int p[n+1],start[n+1];
    vector <int> adj[n+1];
    vector <int>::iterator it;
    for(i=1;i<=n;i++) {
        cin >> p[i];
        if(p[i]!=-1)adj[p[i]].push_back(i);
    }
    int k=1;
    for (i=1;i<=n;i++) {
        if(p[i]!=-1 && p[p[i]]==-1){
            start[k] = p[i];
            k++;
        }
    }
    k--;
    queue < pair<int,int> > q;
    pair <int,int> temp,cur;
    int ans=1;
    for (i=1;i<=k;i++){
        temp.first=start[i];
        //cout << start[i];
        temp.second=1;
        q.push(temp);
        while(!q.empty()) {
            cur = q.front();
            visited[cur.first]=1;
            q.pop();
            for (it=adj[cur.first].begin();it!=adj[cur.first].end();it++) {
                temp.first=*it;
                temp.second=cur.second+1;
                if(visited[temp.first]==0){
                    q.push(temp);
                    ans=max(ans,temp.second);
                }
            }
        }
    }
    cout << ans;
}


