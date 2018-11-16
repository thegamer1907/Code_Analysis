#include <iostream>

using namespace std;

int main(){
    
    int n,t;
    cin>>n>>t;

    char line[50];
    for(int i = 0;i<n;i++){
        cin>>line[i];
    }
    if(n==1){
        cout<<line[0];
        return 0;
    }
    for(int j = 0; j < t; j++){
        for(int k = 0;k<n-1;k++){
            if(line[k] == 'B' && line[k+1]== 'G'){
                line[k]='G';
                line[k+1]='B';
                k++;
            }
        }
    }

    for(int m = 0;m<n;m++){
        cout<<line[m];
    }

    return 0;
}