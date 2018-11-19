#include <iostream>
using namespace std;
int main(){
    string pas="", help;
    int words;
    cin>>pas>>words;
    string arr[words];
    for(int x=0;x<words;x++){
        cin>>help;
        arr[x]=help;
    }
    for(int a=0;a<words;a++){
        if(arr[a]==pas){
            cout<<"YES";
            return 0;
        }
    }
    for(int y=0;y<words;y++){
        for(int z=0;z<words;z++){
            //cout<<arr[y][1]<<arr[z][0]<<endl;
            //cout<<arr[y][0]<<arr[z][1]<<endl;
            if(arr[y][1]==pas[0]&&arr[z][0]==pas[1]||arr[y][0]==pas[1]&&arr[z][1]==pas[0]){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
