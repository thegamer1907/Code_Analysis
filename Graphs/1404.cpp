#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, tmp;
    cin>>n>>t;
    vector<int> a;
    for(int i=0;i<n-1;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    int pos=1;
    while(pos!=t&&pos<t){
        pos+=a[pos-1];
    }
    if(pos==t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
