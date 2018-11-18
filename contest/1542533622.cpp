#include<bits/stdc++.h>
using namespace std;

int main(){
    string pw;
    cin >> pw;
    
    int n;
    cin >> n;
    
    string arr[n+1];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    
    for(int i=0;i<n;i++){
        if(arr[i]==pw){
            cout << "YES" << endl;
            return 0;
        }
        for(int j=0;j<n;j++){
            string k=arr[i].substr(1,1)+arr[j].substr(0,1);
            if(k==pw){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    
}