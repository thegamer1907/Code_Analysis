#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;

    int x, cnt = 0, maxi = 0, one = 0;
    for(i=0;i<n;i++){
        cin>>x;
        if(x == 1){
            cnt--; one++;
            if(cnt < 0){
                cnt = 0;
            }
        } else {
            cnt++;
            if(cnt > maxi){
                maxi = cnt;
            }
        }
    }

    cout<<(maxi == 0 ? one-1 : maxi+one)<<endl;
}
