#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string inputt;
    cin>>inputt;
    int size=inputt.size();
    int counter=1;
    for(int i=1;i<size;i++){
        if(inputt[i]==inputt[i-1]){
            counter++;
        }
        else{
            counter=1;
        }
        if(counter>=7){
            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";
    return 0;
}
