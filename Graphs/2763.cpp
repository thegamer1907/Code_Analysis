#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,mi=0;cin>>n>>m;
    vector<int> v(n);
    vector<int> ne(n);
    for(int i = 0,a,b ; i < m ; i ++){
        cin>>a>>b;a--;b--;
        v[a]++;
        v[b]++;
        ne[a]=b;
        ne[b]=a;
    }
    for(int i = 0 ; i < n ; i ++){
        if(v[i]==0){
            cout<<n-1<<endl;
            for(int j = 0 ; j < n ; j ++){
                if(i==j)continue;
                cout<<i+1<<" "<<j+1<<endl;
            }
            return 0;
        }else{
            if(v[mi]>v[i])mi=i;
        }
    }
}
