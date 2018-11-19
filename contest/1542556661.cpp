#include <iostream>
#include <algorithm>
using namespace std;

int D[66];

int main(){
    int n,k,tmp,num;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        num=0;
        for(int j=k-1;j>=0;j--){
            cin>>tmp;
            if(tmp) num+=(1<<j);
        }
        D[num]=1;
    }
    for(int i=0;i<(1<<k);i++){
        for(int j=0;j<(1<<k);j++){
            if((i&j)==0&&D[i]&&D[j]) {cout<<"YES"<<endl;return 0;}
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
