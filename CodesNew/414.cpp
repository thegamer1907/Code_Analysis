#include <bits/stdc++.h>

using namespace std;

int a[100006];
int main()
{
    int n,t,i,j,ma=0,k=0,sum=0;
    cin>>n>>t;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    i=0;
    j=0;
    for(j=0;j<n;){
        if(sum<t){
            sum=sum+a[j];
            k++;
            j++;
            if(sum<=t)
                ma=max(ma,k);
        }
        else{
            sum=sum-a[i];
            i++;
            k--;
        }
    }
    cout<<ma;
    return 0;
}