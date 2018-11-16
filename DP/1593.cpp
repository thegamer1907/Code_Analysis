#include<bits\stdc++.h>
using namespace std;
char s[110000];
int main(){
    cin>>s;
    int len,w=-1,ab1=0,ba1=0,ab2=0,ba2=0,i=1;
    len=strlen(s);
    while(i<len){
        if(s[i]=='B'&&s[i-1]=='A'){
            if(w==i-1){
                ab2++;ba1--;
            }else{
                ab1++;ab2++;
            }
            w=i++;
        }
        if(s[i]=='A'&&s[i-1]=='B'){
            if(w==i-1){
                ba2++;ab1--;
            }else{
                ba1++;ba2++;
            }
            w=i;
        }
        i++;
    }
    if((ab1>=1&&(ba1>=1||ba2>=1))||((ab1>=1||ab2>=1)&&ba1>=1)||(ba2>=2&&ab2>=2)){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
