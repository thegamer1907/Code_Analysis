#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin>>s;
    int n = s.length();
    int arr[n];
    arr[n-1]=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) arr[i]=1;
        else arr[i]=0;
    }
    int sums[n];
    sums[n-1]=0;
    for(int i=n-2;i>=0;i--){
        sums[i]=sums[i+1]+arr[i];
    }
    int q;
    cin>>q;

    while(q--){
        int a, b;
        cin>>b>>a;
        a--; b--;
        if(a<=0) cout<<sums[b]<<endl;
        else cout<<sums[b]-sums[a]<<endl;
    }

    //for(int i=0;i<n;i++) cout<<sums[i]<<" ";

    return 0;
}
