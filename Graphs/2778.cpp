#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+9;
int main(){
    int n,m,e,f;
    int mark[1111];
    while(cin>>n>>m){
        memset(mark,0,sizeof(mark));
        for(int i=0;i<m;i++){
            cin>>e>>f;
            mark[e]=mark[f]=1;
        }
        for(int i=1;i<=n;i++){
            if(!mark[i]){
                e=i;break;
            }
        }
        cout<<n-1<<endl;
        for(int i=1;i<=n;i++){
            if(i==e)continue;
            cout<<e<<' '<<i<<endl;
        }
    }
}
