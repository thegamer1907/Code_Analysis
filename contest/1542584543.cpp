
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n,i,f,tf,hf; 
    string pass,tmp;
    cin>>pass;
    scanf(" %d",&n);
    f = tf = hf = 0;
    for(i=0;i<n;i++){
        cin>>tmp;
        if(tmp == pass) f=1;
        else if(tmp[1] == pass[0] && pass[1] == tmp[0]) f=1;
        else if(pass[0] == tmp[1]){
            hf = 1;
        }
        else if(pass[1] == tmp[0]){
            tf = 1;
        }
    }
    if(f==0) f = tf*hf;
    if(f==1) printf("YES");
    else printf("NO");
    
    return 0;
}
