#include<bits/stdc++.h>
using namespace std;
typedef vector<int> v;
int main(){
    int n,m;
    cin>>n;
    v a(n),b;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    b.resize(m);
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    int i=0,j=0;
    while(i<n && j<m){
        //cout<<a[i]<<" "<<b[j]<<endl;
        if(abs(a[i]-b[j])<2){
            ans++;
            i++;
            j++;
        }
        else if(a[i]>b[j])j++;
        else i++;
    }
    cout<<ans;
    return 0;
}