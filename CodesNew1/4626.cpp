#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    vector<int> v(n);
    int r;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=n-1;
    int ans=0;
    for(int j=n/2-1;j>=0;j--){
        if(2*v[j]<=v[i]){
            ans++;
            i--;
        }
    }
    
    
    cout<<n-ans;
}