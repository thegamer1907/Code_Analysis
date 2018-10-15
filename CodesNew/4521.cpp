#include<bits/stdc++.h>

using namespace std;

int main(){
    long N,ans,temp;
    cin>>N;
    ans = N;
    long a[N];
    for(long i=0;i<N;i++)
        cin>>a[i];
    sort(a,a+N);
    temp = N/2;
    for(long i=0;i<N/2;i++){
        while(true){
            if(2*a[i]<=a[temp]){
                ans--;
                temp++;
                break;
            } else {
                temp++;
            }
            if(temp == N)
                break;
        }
        if(temp == N)
            break;
    }
    cout<<ans<<endl;
    return 0;
}
