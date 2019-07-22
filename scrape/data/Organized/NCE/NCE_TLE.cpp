#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxm=1e5+100;
int a[maxm];
int main(){
    int n;
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    a[0]=1e9+10;
    a[n+1]=1e9+10;
    ll sum=0;
    int t=500000000/n;
    while(t--)
        for(int i=1;i<=n;i++){
            if(a[i]<a[i-1]&&a[i]<a[i+1])
            {
                sum+=a[i];
                a[i]=0;
            }
            else if(a[i]>a[i-1]&&a[i]>a[i+1]){
                sum+=a[i];

                a[i]=max(a[i-1]+1,a[i+1]+1);
                sum-=a[i];
            }
            else{
                sum+=a[i];

                a[i]=min(a[i-1]+1,a[i+1]+1);
                sum-=a[i];
            }
        }
    if(sum%2)
        cout<<"sjfnb";
    else
        cout<<"cslnb";
    return 0;
}