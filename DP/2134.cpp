#include <bits/stdc++.h>

using namespace std;

int cnt [100001] ;
int main(){
    int n , req_n;
    cin>>n>>req_n;
    int a[n] , dist[n+1];
    int dist_cnt = 0 ;
    for(int i = 0 ; i < n ; i++){
     cin>>a[i];
     }
     for(int i = n-1 ; i>= 0 ; i--){
        if(!cnt[a[i]]){
        cnt[a[i]] = 1 ;
        dist_cnt++;
        }
        dist[i+1] = dist_cnt;
    }
    while(req_n--){
    int i ;
    scanf("%d",&i);
    cout<<dist[i]<<"\n";
    }

}
