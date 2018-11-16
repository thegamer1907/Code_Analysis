#include <iostream>

using namespace std;

int main(){
    int len,time;
    cin>>len>>time;
    char line[len];
    cin>>line;
    for(int j=0;j<time;j++){
        for(int i=1;i<len;i++){
            if(line[i]=='G' && line[i-1]=='B'){
                swap(line[i],line[i-1]);
                i++;
            }
        }
    }
    cout<<line;
    return 0;
}
