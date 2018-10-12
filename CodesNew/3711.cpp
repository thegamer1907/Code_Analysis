#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int MAX=0;
    priority_queue<int,vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        pq.push(x);
        MAX=max(MAX,x);
    }
    int ans2=MAX+m;
    for(int i=0;i<m;i++){
        int x=pq.top();
        pq.pop();
        x++;
        pq.push(x);
    }
    int ans1=0;
    while(!pq.empty()){
        ans1=max(ans1,pq.top());
        pq.pop();
    }
    cout<<ans1<<" "<<ans2<<endl;
}