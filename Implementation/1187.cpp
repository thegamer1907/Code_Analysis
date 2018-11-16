#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int length,time;
    bool swapped=false;
    string str;
    cin>>length>>time>>str;
    for(int i=0;i<time;i++){
        swapped=false;
        for(int k=0;k<length-1;k++){
            if (str[k]=='B' && str[k+1]=='G' && swapped==false){
                str[k]='G';
                str[k+1]='B';
                swapped=true;
            } else if (swapped == true) swapped=false;
        }
    }
    cout<<str;
    return 0;
}
