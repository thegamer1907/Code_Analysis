#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+100;
int n,k;
int vis[100];
int a[10];
void hh(){
    int sum=0;
    for(int i=1;i<=k;i++){
        sum=sum*2+a[i];
    }
    vis[sum]=1;
}
bool check(int x,int y){
    while(x||y){
        if(x%2+y%2==2) return false;
        x/=2;
        y/=2;
    }
    return true;
}
int main(){

    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            scanf("%d",&a[j]);
        }
        hh();
    }
    int m=1<<k;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(vis[i]&&vis[j]){
                if(check(i,j)){
                    cout<<"YES"<<endl;return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;return 0;
}
