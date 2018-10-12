#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define mp make_pair
#define bp push_back
const int mx=1e5+10;
using namespace std;
int a[mx],b[mx];
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0,sum=a[0],ans=0;
    while(l<n&&r<n){
        if(l>r){
            r++;
            sum+=a[r];
            continue;
        }
        if(sum>t){
            sum-=a[l];
            l++;
        }
        else{
            ans=max(ans,r-l+1);
            r++;
            if(r!=n){
                sum+=a[r];
            }
        }
    }
    cout<<ans;
}
