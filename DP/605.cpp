#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int n;
    n=s.size();
    int m;
    cin>>m;
    vector<int> a(n);
    a[0]=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])a[i]=a[i-1]+1;
        else a[i]=a[i-1];
    }
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        l--;r--;
        cout<<a[r]-a[l]<<endl;
    }
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}
