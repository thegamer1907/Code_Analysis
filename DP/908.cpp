#include<iostream>
#include<climits>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int dp[n];
    int no_of_ones=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==1){
            no_of_ones++;
            dp[i]=-1;
        }else{
            dp[i]=1;
        }
    }

    int maxsum=-1;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+= dp[i];
        if(currsum> maxsum){
            maxsum=currsum;
        }
        if(currsum < 0) {
            currsum = 0;
        }

    }
    cout << no_of_ones+maxsum << endl;

}