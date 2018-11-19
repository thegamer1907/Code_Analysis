#include<bits/stdc++.h>
using namespace std;
int a[17],b[4];
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    while(cin>>n>>k){
        int x,y;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;++i){
            x=0;
            for(int j=0;j<k;++j){
                cin>>y;
                if(y) x|=(1<<j),++b[j];
            }
            ++a[x];
        }
        if(a[0]) {
            cout<<"YES"<<endl;
            continue;
        }
        int t=(1<<k);
        y=-1;
        for(int i=0;i<k;++i){
            if(b[i]==n){
                cout<<"NO"<<endl;
                y=1;
                break;
            }
        }
        if(y!=-1) continue;
        for(int i=1;i<t;++i){
            for(int j=i+1;j<t;++j){
                x=i&j;
                if(x) continue;
                if(a[i] && a[j]){
                    y=1;
                    break;
                }
            }
            if(y==1) break;
        }
        if(y==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
/*
4 4
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
*/
/**
#include<bits/stdc++.h>
using namespace std;
int a[100100],b[4],c[4];
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=0;i<n;++i){
        int t=0;
        for(int j=k-1;j>=0;--j){
            cin>>b[j];
            if(b[j]) t|=(1<<j),++c[j];
        }
        a[i]=t;
    }
    for(int i=0;i<k;++i){
        if(c[i]==n){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    sort(a,a+n);
    if(a[0]==0){
        cout<<"YES"<<endl;
        return 0;
    }
    int sum=(1<<k)-1;
    for(int i=0;i<n;++i){
        int t=a[i]&a[0];
        if(t==0 && a[i]+a[0]<=sum){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
**/
