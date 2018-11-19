#include <bits/stdc++.h>
#define ll long long
#define fi first
#define sec second

using namespace std;

int dp[17];

int main(){

    int n,k;
    cin>>n>>k;
    int c;
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<k;j++){
            cin>>c;
            ans=ans*2+c;
        }
        dp[ans]++;
    }

    for(int i=0;i<(1<<k);i++){
        for(int j=0;j<(1<<k);j++){
            if(dp[j]&&dp[i]){

                bool flag=0;
                for(int p=0;p<k;p++){
                    if(j&(1<<p)&&i&(1<<p)){
                        flag=1;
                    }
                }
                if(!flag){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"NO"<<endl;


}
