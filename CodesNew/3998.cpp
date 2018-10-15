#include <bits/stdc++.h>
using namespace std;

long long n,q,a[200009],k[200009],ans;

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<q;i++){cin>>k[i];}
    for(int i=1;i<n;i++){a[i]+=a[i-1];}

    for(int i=0;i<q;i++){
        //cout<<lower_bound(a,a+n,k[i])-a+1<<endl;
        ans+=k[i];
        if(ans>=a[n-1]){
            ans=0;
            cout<<n<<endl;
        }
        else{
            if(a[(lower_bound(a,a+n,ans)-a)]>ans){
                cout<<n-(lower_bound(a,a+n,ans)-a)<<endl;
            }
            else
                cout<<n-((lower_bound(a,a+n,ans)-a)+1)<<endl;
        }
    }
    return 0;
}
