#include <bits/stdc++.h>
#define M 1000010
#define pb push_back
#define mp make_pair
#define st first
#define nd second
using namespace std;
int h,m,s,t1,t2,x;
bool ans;

int main(){
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(m||s){
        h++;
        if(h==13){
            h=1;
        }
    }
    if(m%5!=0||s){
        m/=5;
        m++;
    }
    else{
        m/=5;
    }
    if(s%5!=0){
        s/=5;
        s++;
    }
    else{
        s/=5;
    }
    if(m==0){
        m=12;
    }
    if(s==0){
        s=12;
    }
    //cout<<h<<" "<<m<<" "<<s<<endl;
    x=t1;
    while(true){
        x++;
        if(x==13){
            x=1;
        }
        if(x==h||x==m||x==s){
            break;
        }
        if(x==t2){
            ans=true;
            break;
        }
    }
    x=t1;
    while(true){
        if(x==h||x==m||x==s){
            break;
        }
        x--;
        if(x==0){
            x=12;
        }
        if(x==t2){
            ans=true;
            break;
        }
    }
    puts(ans?"YES":"NO");
    return 0;
}
