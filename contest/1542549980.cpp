#include <bits/stdc++.h>

using namespace std;

string SS;

string in[500];



int main(){

    cin>>SS;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)cin>>in[i];

    for(int i=0; i<n; i++){
        if(in[i]==SS){
            cout<<"YES"<<endl;
            return 0;
        }

    }
    for(int i=0; i<n; i++){

        if(in[i][1]!=SS[0])continue;
        for(int j=0; j<n; j++){
           // if(i==j)continue;
            if(in[j][0]==SS[1]){
                cout<<"YES"<<endl;
                return 0;
            }
        }

    }
    cout<<"NO"<<endl;
}
