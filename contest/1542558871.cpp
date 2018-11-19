#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n, i;
    int fl=0, sl=0;
    char bark[3];
    char str[3];

    cin>>bark;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>str;
        if(strcmp(str, bark)==0){
        	fl++;sl++;
        }
        if(str[0] == bark[1])
            fl++;
        if(str[1] == bark[0])
            sl++;
    }

    if(fl>=1 && sl>=1)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}