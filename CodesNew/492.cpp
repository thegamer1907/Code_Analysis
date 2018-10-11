#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int t,max=0,cnt=0;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long int sum=v[0];
    for(int i=0,j=0;j<n;){
        if(sum<=t){
            cnt=j-i+1;
            if(cnt>max){
                max=cnt;
            }
            j++;
            sum=sum+v[j];
        }
        else{
            sum=sum-v[i];
            i++;
        }
    }
    cout<<max;
}
        
    
