#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int N=1e5+10;
int M[N][10];

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=k;j++){
            cin>>M[i][j];
            if(M[i][j]==0) cnt++;
        }
        if(cnt==k) {cout<<"YES"<<endl;return 0;}
    }
    if(k==2){
        int t1=0,t2=0;
        for(int i=1;i<=n;i++){
            if(M[i][1]==0) t1++;
            if(M[i][2]==0) t2++;
            if(t1>=1&&t2>=1) {cout<<"YES"<<endl;return 0;}
        }
    }
    else if(k==3){
        int vis[10][10][10];
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++){
            int t1=M[i][1],t2=M[i][2],t3=M[i][3];
            if(!vis[t1][t2][t3]){
                vis[t1][t2][t3]=1;
                for(int j=1;j<=n;j++){
                    int t4=M[j][1],t5=M[j][2],t6=M[j][3];
                    //cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<" "<<t5<<" "<<t6<<endl;
                    if((t1+t4)<=1&&(t2+t5)<=1&&(t3+t6)<=1) {cout<<"YES"<<endl;return 0;}
                }
            }
        }
    }
    else if(k==4){
        int vis[10][10][10][10];
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++){
            int t1=M[i][1],t2=M[i][2],t3=M[i][3],t4=M[i][4];
            if(!vis[t1][t2][t3][t4]){
                vis[t1][t2][t3][t4]=1;
                for(int j=1;j<=n;j++){
                    int t5=M[j][1],t6=M[j][2],t7=M[j][3],t8=M[j][4];
                    if((t1+t5)<=1&&(t2+t6)<=1&&(t3+t7)<=1&&(t4+t8)<=1) {cout<<"YES"<<endl;return 0;}
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
