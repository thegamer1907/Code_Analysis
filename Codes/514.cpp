#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<30000000;i++){
        int temp=i;
        int ans=0;
        while(temp){
            int x=temp%10;
            ans+=x;
            temp/=10;
        }
        if(ans==10)cnt++;
        if(cnt==n){
            cout<<i<<endl;
            break;
        }
    }
}