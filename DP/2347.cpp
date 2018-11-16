#include<bits/stdc++.h>
using namespace std;
int digits[105];
int n;
int ans;

bool isdivisible(int num){
    if(num!=0){
        if(num%8==0){
            ans=num;
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}

int main(){
    int asasd;
    string num;
    cin>>num;
    n=num.length();
    bool haszero=false;
    for(int i=0;i<n;i++){
        digits[i]=(int)num[i]-'0';
        if(digits[i]==0){
            haszero=true;
        }
    }
    for(int i=0;i<n;i++){
        if(isdivisible(digits[i])){
            cout<<"YES"<<endl;
            cout<<digits[i]<<endl;
            return 0;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(isdivisible(10*digits[i]+digits[j])){
                cout<<"YES"<<endl;
                cout<<10*digits[i]+digits[j]<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(isdivisible(100*digits[i]+10*digits[j]+digits[k])){
                    cout<<"YES"<<endl;
                    cout<<100*digits[i]+10*digits[j]+digits[k]<<endl;
                    return 0;
                }
            }
        }
    }
        if(haszero){
            cout<<"YES"<<endl;
            cout<<0<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}