#include<bits/stdc++.h>
using namespace std;
const int maxn = 105;
const int inf = 0x3f3f3f3f;
int N,M,f[maxn][maxn], g[maxn][maxn];
int main(){
    cin>>N>>M;
    
    map<string,int>Mp;
    string s;
    for(int i=1;i<=N;i++){
        cin>>s;
        Mp[s]++;
    }
    int num=0;
    for(int i=1;i<=M;i++){
        cin>>s;
        if(Mp[s]){
            num++;
        }
    }
    if(N>M){
        cout<<"YES"<<endl;
    }else if(N<M){
        cout<<"NO"<<endl;
    }else{
        if(num%2==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
