#include<bits/stdc++.h>
using namespace std;
const int N=1e4+1;
int visited[N];
int color[N];
vector<int> arr[N];
int cnt=1;
void dfs(int index,int n){
    if(visited[index]==1)
        return;
    visited[index]=1;

    for(int i=0;i<arr[index].size();i++){
        if(!visited[arr[index][i]]){
            if(color[index]!=color[arr[index][i]])
                cnt++;
            dfs(arr[index][i],n);
        }
    }
}

int main(){
    int n;
    cin>>n;
    //cout<<n<<endl;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        //cout<<x<<endl;
        arr[x].push_back(i);
        //arr[i].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cin>>color[i];
    }
    dfs(1,n);
    cout<<cnt;
    return 0;
}
