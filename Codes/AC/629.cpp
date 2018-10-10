#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int k;
bool check(int cnt){
    int ans=0;
    while(cnt){
        ans+=cnt%10;
        cnt/=10; 
    }
    return ans==10;
}
void solve(){
    int cnt=1;
    int tans=0;
    while(1){
        cnt+=9;
        if(check(cnt)) tans++;
        if(tans==k) break;
    }
    cout<<cnt<<endl;
}
int main(){
    cin>>k;
    solve();
    return 0;
}