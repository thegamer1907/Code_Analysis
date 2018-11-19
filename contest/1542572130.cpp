#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,c=0,t;
    string pass,tr[100],ch[100];
    cin>>pass>>n;
    for(int i=0;i<n;++i){
        cin>>tr[i];
    }
    for(int i=0;i<n;++i){
            for(int j=0;j<n;++j)
                ch[i]+=tr[i]+tr[j];
        }
    for(int i=0;i<n;++i){
        for(int j=0;j<(2*n)+2;++j){
            if(ch[i].find(pass)!=-1){
                t=ch[i].find(pass);
                if(ch[i][t]==pass[0]&&ch[i][t+1]==pass[1]){
                    c=1;
                    break;
                }
                else
                ch[i].erase(ch[i][j],1);
            }
            }
            if(c)
            break;
    }
    if(c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
