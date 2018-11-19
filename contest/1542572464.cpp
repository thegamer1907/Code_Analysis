#include <iostream>


using namespace std;

int main(){
    string pass;    cin>>pass;
    int q;  cin>>q;
    int count1 = 0, count2 = 0;
    for(int i = 0 ; i < q ; i ++){
        string cur; cin>>cur;
        if(cur==pass){
            cout<<"YES"<<endl;
            return 0;
        }
        if(cur[0]==pass[1]){
            count1++;
        }
        if(cur[1]==pass[0]){
            count2++;
        }
    }
    if(count1 != 0 && count2 != 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
