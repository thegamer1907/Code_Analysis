#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int data[n];
    map <int,int> mp;
    for(int i=0;i<n;i++){
        scanf("%d",&data[i]);
        mp.insert(make_pair(data[i],0));
    }
    int count[n+1];
    memset(count,0,sizeof(count));
    for(int i=n-1;i>=0;i--){
        if(mp[data[i]]==0)
           count[i]++;
        count[i]+=count[i+1];
          mp[data[i]]++;
    }
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        cout<<count[val-1]<<'\n';
    }
    
    return 0;
}