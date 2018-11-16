                                          //First Code on DFS
                                          //Author : Vikram Singh
                                          //Tag = DFS
#include<bits/stdc++.h>
using namespace std;
vector<int > v[30001];
bool a[30001];
void initialize(){
    for(int i=1;i<=30001;i++){
        a[i] = false;
    }
}
void DFS(int n){
    a[n] = true;
    for(int i = 0;i<v[n].size();i++){
        if(a[v[n][i]]==false){
            a[v[n][i]] = true;
            DFS(v[n][i]);
        }
    }
}

int main(){
   int n,t,i,x;
   cin>>n>>t;
   initialize();
   for(i=1;i<n;i++){
    cin>>x;
    v[i].push_back((x+i));
   }
   DFS(1);
   if(a[t]==true){
    cout<<"YES \n";
   }
   else{
    cout<<"NO \n";
   }
   return 0;
}
