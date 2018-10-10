#include<bits/stdc++.h>


using namespace std;

map<long long,long long> lols;
map<long long,long long> lols2;
vector<long long> nums;
long long ans =0;

int main(){
    long long n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    reverse(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        //cout<<ans<<" "<<lols2[nums[i]*k]<<" "<<lols[nums[i]*k]<<endl;
        ans+=lols2[nums[i]*k];
        lols2[nums[i]]+=lols[nums[i]*k];
        lols[nums[i]]++;
    //cout<<'*'<<ans<<" "<<lols2[nums[i]*k]<<" "<<lols[nums[i]*k]<<endl;
    }
    cout<<ans<<endl;

}
