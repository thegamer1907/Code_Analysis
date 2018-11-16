#include<iostream>
#include <bits/stdc++.h>
using  namespace std;
int main(){
    string str;
    cin>>str;
    int l=str.length(),count=1;
    char current=str[0];
    
    for(int i=1;i<l;i++){
        if(str[i]==current){
            count++;
            if(count>6){
                cout<<"YES";
                return 0;
            }
        }
        else{
            current=str[i];
            count=1;
        }
    }
    cout<<"NO";
    return 0;
}