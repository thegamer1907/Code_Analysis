#include<iostream>
using namespace std;

int main(){
    string str;
    while(cin>>str){
        int len=str.size();
        int cnt=1;
        for(int i=1;i<len;i++){
            if(str[i]==str[i-1])cnt++;
            else{cnt=1;}
            if(cnt>=7){cout<<"YES"<<endl;break;}
            if(i==len-1){cout<<"NO"<<endl;}
        }
    }
return 0;
}
