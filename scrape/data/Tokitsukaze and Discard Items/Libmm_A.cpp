#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll s[100005];
int main(){
    ll n,m,k;cin>>n>>m>>k;
    for(int i=0;i<m;i++) cin>>s[i];
    long long l=0,cnt=0;
    for(int i=0;i<m;){
        long long now=(s[i]-l-1)/k;
        long long to=(now+1)*k+l;
        int p=lower_bound(s,s+m,to)-s;
        if(s[p]==to){
            l+=p-i;
            l++;
            i=p+1;
        }
        else{
            l+=p-i;
            i=p;
        }
        cnt++;
    }
    cout<<cnt<<endl;
}