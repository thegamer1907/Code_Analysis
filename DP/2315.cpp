#include<bits/stdc++.h>

using namespace std;

vector<int> nums;
bool vnums[300000];
int accu [300000];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int un =0;
    for(int i=n-1;i>=0;i--){
        if(!vnums[nums[i]]){
            vnums[nums[i]]=1;
            un++;
        }
        accu[i]=un;
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        cout<<accu[x-1]<<endl;
    }
}
