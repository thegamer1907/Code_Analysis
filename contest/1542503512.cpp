#include<bits/stdc++.h>  
using namespace std;  
int main(){  
    string beg;  
    cin>>beg;  
    int n;  
    cin>>n;  
    string str[n];  
    for(int i=0;i<n;i++) cin>>str[i];  
    for(int i=0;i<n;i++){  
        if(str[i]==beg){  
            cout<<"YES"<<endl;  
            return 0;  
        }  
    }  
    for(int i=0;i<n;i++){  
        for(int j=0;j<n;j++){  
            string tmp=str[i]+str[j];  
            if(tmp[1]==beg[0]&tmp[2]==beg[1]){  
                cout<<"YES"<<endl;  
                return 0;  
            }  
        }  
    }  
    cout<<"NO"<<endl;  
    return 0;  
}  