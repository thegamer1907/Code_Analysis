#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,cnt_1=0,cnt_0=0,cnt_max0=-1;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==1){
            cnt_1++;
            if(cnt_0>0){
                cnt_0--;
            }
        }
        if(a==0){
            cnt_0++;
            if(cnt_0>cnt_max0)
                cnt_max0=cnt_0;
        }
    }
    int ans=cnt_1+cnt_max0;
    cout<<ans<<endl;
    return 0;
}
