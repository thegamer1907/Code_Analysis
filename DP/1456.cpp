#include<bits/stdc++.h>
using namespace std;
int ans[101][101];
bool a[101];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)    
        for(int j=i;j<n;j++){
            for(int k=0;k<i;k++)
                ans[i][j]+=(a[k]==1);
            for(int k=j+1;k<n;k++)
                ans[i][j]+=(a[k]==1);
            for(int k=i;k<=j;k++)
                ans[i][j]+=(a[k]==0);
        }
    int cnt=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cnt=max(cnt,ans[i][j]);
    cout<<cnt<<endl;
    return 0;
}