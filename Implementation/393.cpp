#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> x(n);
    for (int i=0;i<n;i++){
        cin>>x[i];
    }
    int c=0;
    for (int i=0;i<n;i++){
        if (x[i]>=x[k-1] && x[i]!=0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}