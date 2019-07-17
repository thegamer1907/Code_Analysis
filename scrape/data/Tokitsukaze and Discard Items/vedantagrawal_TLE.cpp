#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long int n,m,k;
    cin>>n>>m>>k;
    vector<long long int> v;
    long long int temp;
    for(long long int i=0;i<m;i++){
        cin>>temp;
        v.push_back(temp);
    }
//    sort(v.begin(),v.end());
    long long int i=0;
    long long int ans=0;
    temp=k;
    long long int curr=0;
    long long int count=0;
    while(i<m){
        if(temp==k){
            long long int q=(v[i]-curr)/k;
            if((v[i]-curr)%k==0)
                q++;
            curr=curr+(q*k);
        }
        else{
            curr=curr+temp;
        }
        count=0;
        while(i<m){
            if(v[i]<=curr){
                i++;
                count++;
            }
            else{
                break;
            }
        }
        temp=count;
        if(temp==0){
            temp=k;
            
        }
        else{
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}