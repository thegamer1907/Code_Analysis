#include <iostream>

using namespace std;
//#include "../template.h"

#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define lp(i,n) for(int i = 0; i <n;i++)
////////////////////////////////////////
string swap(string s,int i){
    s[i]='B';
    s[i-1]='G';
    return s;
}
int main() {
    int n,t;
    sfi2(n,t);
    string s,s1;
    cin>>s;
    s1=s;
    lp(i,t){
        s1=s;
        lp(i,n){
            if(s1[i]=='G'&&i!=0&&s1[i-1]=='B'){
                s=swap(s,i);
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
