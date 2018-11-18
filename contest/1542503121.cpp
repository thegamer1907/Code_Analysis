#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int y;
    cin>>y;
    int cont=0;
    int cont1=0;
    for(int i=0;i<y;i++){
        string g;
        cin>>g;
        if(x[0]==g[0]  && x[1]==g[1]){
            cont++;
            cont1++;
        }
        if(x[0]== g[1] ) cont++;
        if(x[1]== g[0]  ) cont1++;
    }
    if(cont>=1 && cont1>=1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
