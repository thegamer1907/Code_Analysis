#include <iostream>

using namespace std;

int main()
{

int x,y;
cin>>x>>y;
string r;
cin>>r;
for(int t=0;t<y;t++){
        string g="";

for(int i=0;i<x;i++){
        if(r[i]=='G'){
            g+="G";
        }
    else if(r[i]=='B'&&r[i+1]=='G'){
        g+="GB";
        i++;
        if(i>x){
            break;
        }
    }
    else{
        g+="B";
    }
}
r=g;
}

cout<<r;


    return 0;
}
