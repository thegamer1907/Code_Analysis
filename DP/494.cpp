#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,i,c=0,x[105],y[105],j;
    cin>>a;
    for(i=0;i<a; i++){
        cin>>x[i];
    }
    sort(x, x+a);
    cin>>b;
     for(i=0;i<b; i++){
        cin>>y[i];
    }
    sort(y, y+b);
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(x[i]==y[j]-1||x[i]==y[j]){
                c++;
                y[j]=-1;
                break;
            }
            else if(x[i]==y[j]+1 || x[i]==y[j]){
                c++;
                y[j]=-1;
                break;
            }
        }
    }
    cout<<c;
}

