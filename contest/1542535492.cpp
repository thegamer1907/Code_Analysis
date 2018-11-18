#include<bits/stdc++.h>
using namespace std;
int main (){
    char ch[4],ch2[4];
    cin>>ch;
    int n,c=0,d=0,e=0;
    cin>>n;
    while(n--){
        cin>>ch2;
        if(ch2[0]==ch[0]&&ch2[1]==ch[1]){
            c=2;
        }
        if(ch2[0]==ch[1]){
            if(d!=1){
                c++;d++;
            }
        }
        if(ch2[1]==ch[0])
            if(e!=1){
                c++;e++;
            }
    }
    if(c>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
