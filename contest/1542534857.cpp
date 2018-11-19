#include <iostream>
#include <cstring>
using namespace std;
int mp[90];
int main(){
    memset(mp,0,sizeof(mp));
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    mp[a*5]=1;
    mp[b]=1;
    mp[c]=1;
    int flag1=0,flag2=0;
    // if(mp[e*5])flag1=1,flag2=1;
    if(d>e){
        swap(d,e);
    }
    for(int i=d*5;i<e*5;i++){
        if(mp[i]){
            flag1=1;
            break;
        }
    }
    // int flag2=0;
    for(int i=e*5;i<=12*5;i++){
        if(mp[i]){
            flag2=1;
            break;
        }
    }
    for(int i=0;i<d*5;i++){
        if(mp[i]){
            flag2=1;
            break;
        }
    }
    // cout<<flag1<<" "<<flag2<<endl;
    if(flag1&&flag2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}