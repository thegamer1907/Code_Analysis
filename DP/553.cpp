#include<bits/stdc++.h>
using namespace std;
int a[100005],n,l,r;
int main(){
    string s;
    cin>>s>>n;
    a[0]=0;
    for(auto i=0;i<s.length()-1;i++){ 
        if(s[i] == s[i+1]){
            a[i+1]=a[i]+1;
        }else{
            a[i+1]=a[i];
        }
    }
    
    for(auto i=0;i<n;i++){
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
