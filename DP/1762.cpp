#include <iostream>
#include <cstring>
using namespace std;

struct nn{
    int a,b;
};
nn ab[100010];
nn ba[100010];
int pa=0,pb=0;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int aba=0,bab=0;
    for(int i=0;i<len-1;i++){
        if(s[i]=='A'&&s[i+1]=='B'){
            ab[pa++]={i,i+1};
        }
        if(s[i]=='B'&&s[i+1]=='A'){
            ba[pb++]={i,i+1};
        }
    }
    int f=0;
    if(pa<=pb){
        for(int i=0;i<pa;i++){
            for(int j=0;j<pb;j++){
                if(ab[i].a!=ba[j].b&&ab[i].b!=ba[j].a){
                    f=1;
                    break;
                }
            }
            if(f){
                break;
            }
        }
    }
    else{
        for(int i=0;i<pb;i++){
            for(int j=0;j<pa;j++){
                if(ab[j].a!=ba[i].b&&ab[j].b!=ba[i].a){
                    f=1;
                    break;
                }
            }
            if(f){
                break;
            }
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
