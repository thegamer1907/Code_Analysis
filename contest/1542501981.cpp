#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 100005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
int cont[maxn][5];
int vis[20];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int add=0;
        for(int j=0;j<k;j++){
            int g;
            cin>>g;
            add<<=1;
            add+=g;
        }
        vis[add]=1;
    }
    int ff=0;
    if(vis[0]){
        ff=1;
    }
    for(int i=1;i<16;i++){
        for(int j=1;j<16;j++){
            if(vis[i]&&vis[j]&&(i&j)==0){
                ff=1;
            }
        }
    }
    if(ff){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}