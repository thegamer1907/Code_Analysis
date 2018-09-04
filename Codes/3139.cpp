#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>
#define SPD ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    SPD;
    int n;cin>>n;
    int t=0,mn=INT_MAX,ans,i=0;
    while(i<n){
        cin>>t;
        t=(t+n-i++-1)/n;
        if(t<mn){
            ans=i;
            mn=t;
        }
    }
    cout<<ans;
    return 0;
}
