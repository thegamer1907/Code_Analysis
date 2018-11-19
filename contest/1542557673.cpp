#include <bits/stdc++.h>

using namespace std;
const int maxn=1e5+5;
int n;
string com;
string arr[105];
int vis[105]={0};
string basic;int Next[maxn];int ans=0,R;
void back_com_c(int r){
      Next[0]=-1;int k=-1,j=0;
      while(j<r-1){
         if(k==-1||com[j]==com[k]){++k;++j;if(com[j]!=com[k])Next[j]=k;else Next[j]=Next[k];}
         else{
            k=Next[k];
         }
      }
}
bool K_name(int l,int r){
   int j=0;
   for(int i=0;i<l;i++){
     if(basic[i]==com[j]){
        if(j==r-1)return 1;
        else j++;
     }
     else{
        if(Next[j]!=-1){
        j=Next[j];i--;}
        else j=0;
     }
   }
   return 0;
}
bool dfs(string c){
    //cout<<c<<endl;
    int L=c.size();
    if(L>3*R)return 0;
    basic=c;
    if(K_name(L,R))return 1;
    for(int i=0;i<n;i++){
        //if(vis[i])continue;
        vis[i]=1;
        if(dfs(c+arr[i]))return 1;
        vis[i]=0;
    }
    return 0;
}
int main(){
    std::ios::sync_with_stdio(false);
    cin>>com>>n;
    int r=com.size();R=r;
    back_com_c(r);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        vis[i]=1;
        if(dfs(arr[i])){
            cout<<"YES"<<endl;
            return 0;
        }
        vis[i]=0;
    }
    cout<<"NO"<<endl;
    return 0; 
}