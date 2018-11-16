#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[101]={0},i=0, tmp=0, dp[101]={0}, tempo = 0;
    for(i;i<n;i++){
        int b;
        cin>>b;
        if(b){
            tmp++;
            arr[i]=0;
        }
        else arr[i]=1;
        dp[i]=tmp;
    }
    for(i=0;i<n;i++){
        int j = 0, temp = n-i;
        while(j+temp<=n){
            int k=j, hasil =0,a = (k+temp);
            for(k=j;k<a;k++){

                hasil += arr[k];

            }
            if(j-1>=0) hasil += dp[j-1];
            if(j+temp<n){
                hasil += (dp[n-1]-dp[j+temp]+1);
                if(dp[j+temp]==dp[j+temp-1]) hasil--;
            }
            if(hasil>tempo) tempo = hasil;
            j++;
        }
    }
    cout<<tempo;
}
