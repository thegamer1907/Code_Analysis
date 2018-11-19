#include<bits/stdc++.h>
using namespace std;
bitset<17>p;
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    while(n--){
        int tmp=0;
        for(int j=0;j<k;j++){
            int x;
            scanf("%d",&x);
            if(x)tmp|=(1<<j);
        }
        //cout<<tmp<<endl;
        p[tmp]=1;
    }
    for(int i=0;i<16;i++)for(int j=0;j<16;j++)if(!(i&j) && p[i] && p[j]){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}
