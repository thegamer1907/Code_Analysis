#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;


int main(){
    string pass;
    bool yes=false;
    int n;
    cin>>pass>>n;
    string word[n];
    for(int i=0;i<n;i++){
        cin>>word[i];
    }
    for(int i=0;i<n;i++){
        if(word[i][0]==pass[0] && word[i][1]==pass[1]){
                cout<<"YES"<<endl;
                yes=true;
                break;
            }
        for(int j=0;j<n;j++){
            if(word[i][1]==pass[0] && word[j][0]==pass[1]){
                cout<<"YES"<<endl;
                yes=true;
                break;
            }
        }
        if(yes){
        break;
        }

    }
    if(!yes){
        cout<<"NO"<<endl;
    }
    return 0;
}

   	  	 	 		 	 				 		  	  	 	