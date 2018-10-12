#include<bits/stdc++.h>
using namespace std;
#define lli long long int


int main(){
    int x,n,m,i,y;
    y=INT_MIN;
    priority_queue<int,vector<int>,greater<int> > q;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>x;
        y=max(y,x);
        q.push(x);
    }
    y=y+m;
    while(m--){
        int z=q.top();
        q.pop();
        z++;
        q.push(z);
    }
    x=INT_MIN;
    while(!q.empty()){
        x=max(x,q.top());
        q.pop();
    }
    cout<<x<<" "<<y<<endl;

}
