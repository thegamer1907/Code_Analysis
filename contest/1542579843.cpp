#include<bits/stdc++.h>
using namespace std;
int main(){
    int con , h , m , s , t1 , t2 , hel1=0 , hel2=0 , fla=0 , fla2=0;
    cin>>h>>m>>s>>t1>>t2;
    if(t2<t1){
        con=t1;
        t1=t2;
        t2=con;
    }
    if(s==t1*5 || s==t2*5){
        cout<<"NO"<<endl;
        return 0;
    }
    if(s!=t1*5 && s!=t2*5){
        if(s>t1*5 && s<t2*5){
            hel1++;
        }
        else{
            hel2++;
        }
    }
    if(s==0){
        if(m==t1*5 || m==t2*5){
            fla2++;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(fla2==0){
        if(m>=t1*5 && m<t2*5){
            hel1++;
        }
        else{
            hel2++;
        }
    }
    if(s==0 && m==0){
        if(h==t1 || h==t2){
            fla++;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(fla==0){
        if(h>=t1 && h<t2){
            hel1++;
        }
        else{
            hel2++;
        }
    }
    if(hel1==0 || hel2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
