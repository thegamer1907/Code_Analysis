#include <bits/stdc++.h>

using namespace std;
int n,k;
const int maxn=1e5+10;
int arr[maxn];
int bin[5];
struct node{
   int num;
   node *p[2];
   node(){
      for(int i=0;i<2;i++){
        p[i]=NULL;
      }
   }
};

node *rt=new node();
int get_bin(int t){
    for(int i=0;i<k;i++){
        bin[i]=t>>k-i-1;
        t-=bin[i]*(1<<(k-i-1));
    }
}

void build(){
     node *start=rt;
     for(int i=0;i<k;i++){
        if(start->p[bin[i]]==NULL){
            start->p[bin[i]]=new node();
            start->p[bin[i]]->num=bin[i];
            start=start->p[bin[i]];
        }
        else{
            start=start->p[bin[i]];
        }
     }
}

bool dfs_find(node *next,int dp){
     if(dp==k)return 1;
     if(bin[dp]==1){
        if(next->p[0]){
            if(dfs_find(next->p[0],dp+1))return 1;
        }
     }
     else{
        for(int i=0;i<2;i++){
            if(next->p[i]){
                if(dfs_find(next->p[i],dp+1))return 1;
            }
        }
     }
     return 0;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin>>n>>k;
    if(n==1){
        int flag=1;
        for(int i=0;i<k;i++){
            int in;cin>>in;
            if(in)flag=0;
        }
        if(!flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        int pre=0;
        for(int j=0;j<k;j++){
            int in;cin>>in;
            pre=pre+(in<<(k-j-1));
        }
        arr[i]=pre;
    }
    for(int i=0;i<n;i++){
        get_bin(arr[i]);
        if(dfs_find(rt,0)){
            cout<<"YES"<<endl;
            return 0;
        }
        build();
    }
    cout<<"NO"<<endl;
}
