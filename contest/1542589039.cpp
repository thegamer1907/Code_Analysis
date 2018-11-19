#include<bits/stdc++.h>
using namespace std;
int main(){
    string input , input2;
    cin>>input;
    int num , last=0 , first=0;
    cin>>num;
    for(int i=0 ; i<num ; i++){
        cin>>input2;
        if(input2==input){
            cout<<"YES"<<endl;
            return 0;
        }
        if(input2[0]==input[1] && input2[1]==input[0]){
            cout<<"YES"<<endl;
            return 0;
        }
        if(input2[0]==input[1]){
            last++;
        }
        if(input2[1]==input[0]){
            first++;
        }
    }
    if(last>0 && first>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
