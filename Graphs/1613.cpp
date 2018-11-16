#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,i=1,tmp,temp=1;
    cin>>n>>t;
    while(i<n){
        cin>>tmp;
        if(i==temp){
            temp = i+tmp;
            if(i==t){
                cout<<"YES";
                return 0;
            }
            if(temp>t){
                cout<<"NO";
                return 0;
            }
        }
        i++;
    }
    if(i==t) cout<<"YES";
}
